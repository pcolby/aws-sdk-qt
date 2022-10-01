// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILTEMPLATESREQUEST_H
#define QTAWS_LISTEMAILTEMPLATESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListEmailTemplatesRequestPrivate;

class QTAWSSESV2_EXPORT ListEmailTemplatesRequest : public SESv2Request {

public:
    ListEmailTemplatesRequest(const ListEmailTemplatesRequest &other);
    ListEmailTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEmailTemplatesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
