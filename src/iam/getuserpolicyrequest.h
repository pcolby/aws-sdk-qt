// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOLICYREQUEST_H
#define QTAWS_GETUSERPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetUserPolicyRequestPrivate;

class QTAWSIAM_EXPORT GetUserPolicyRequest : public IamRequest {

public:
    GetUserPolicyRequest(const GetUserPolicyRequest &other);
    GetUserPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
