// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYEMAILADDRESSREQUEST_H
#define QTAWS_UPDATEPRIMARYEMAILADDRESSREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdatePrimaryEmailAddressRequestPrivate;

class QTAWSWORKMAIL_EXPORT UpdatePrimaryEmailAddressRequest : public WorkMailRequest {

public:
    UpdatePrimaryEmailAddressRequest(const UpdatePrimaryEmailAddressRequest &other);
    UpdatePrimaryEmailAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePrimaryEmailAddressRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
