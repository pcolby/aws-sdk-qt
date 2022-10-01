// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYREQUEST_H
#define QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForCustomPolicyRequestPrivate;

class QTAWSIAM_EXPORT GetContextKeysForCustomPolicyRequest : public IamRequest {

public:
    GetContextKeysForCustomPolicyRequest(const GetContextKeysForCustomPolicyRequest &other);
    GetContextKeysForCustomPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContextKeysForCustomPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
