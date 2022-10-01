// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTREQUEST_H
#define QTAWS_UPDATECONTACTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactRequestPrivate;

class QTAWSSESV2_EXPORT UpdateContactRequest : public SESv2Request {

public:
    UpdateContactRequest(const UpdateContactRequest &other);
    UpdateContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
