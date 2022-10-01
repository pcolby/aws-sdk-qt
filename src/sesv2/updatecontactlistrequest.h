// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTLISTREQUEST_H
#define QTAWS_UPDATECONTACTLISTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactListRequestPrivate;

class QTAWSSESV2_EXPORT UpdateContactListRequest : public SESv2Request {

public:
    UpdateContactListRequest(const UpdateContactListRequest &other);
    UpdateContactListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
