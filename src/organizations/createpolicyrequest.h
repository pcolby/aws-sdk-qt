// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYREQUEST_H
#define QTAWS_CREATEPOLICYREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class CreatePolicyRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT CreatePolicyRequest : public OrganizationsRequest {

public:
    CreatePolicyRequest(const CreatePolicyRequest &other);
    CreatePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
