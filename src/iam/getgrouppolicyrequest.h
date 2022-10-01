// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPPOLICYREQUEST_H
#define QTAWS_GETGROUPPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetGroupPolicyRequestPrivate;

class QTAWSIAM_EXPORT GetGroupPolicyRequest : public IamRequest {

public:
    GetGroupPolicyRequest(const GetGroupPolicyRequest &other);
    GetGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
