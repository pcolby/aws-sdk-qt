// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTPOLICYREQUEST_H
#define QTAWS_GETCONTACTPOLICYREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class GetContactPolicyRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT GetContactPolicyRequest : public SsmContactsRequest {

public:
    GetContactPolicyRequest(const GetContactPolicyRequest &other);
    GetContactPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactPolicyRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
