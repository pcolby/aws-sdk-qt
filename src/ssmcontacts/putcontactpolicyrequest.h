// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTACTPOLICYREQUEST_H
#define QTAWS_PUTCONTACTPOLICYREQUEST_H

#include "ssmcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class PutContactPolicyRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT PutContactPolicyRequest : public SsmContactsRequest {

public:
    PutContactPolicyRequest(const PutContactPolicyRequest &other);
    PutContactPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContactPolicyRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
