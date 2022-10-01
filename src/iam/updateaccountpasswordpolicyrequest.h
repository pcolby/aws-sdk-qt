// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTPASSWORDPOLICYREQUEST_H
#define QTAWS_UPDATEACCOUNTPASSWORDPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAccountPasswordPolicyRequestPrivate;

class QTAWSIAM_EXPORT UpdateAccountPasswordPolicyRequest : public IamRequest {

public:
    UpdateAccountPasswordPolicyRequest(const UpdateAccountPasswordPolicyRequest &other);
    UpdateAccountPasswordPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountPasswordPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
