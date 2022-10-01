// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSUMEROLEPOLICYREQUEST_H
#define QTAWS_UPDATEASSUMEROLEPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAssumeRolePolicyRequestPrivate;

class QTAWSIAM_EXPORT UpdateAssumeRolePolicyRequest : public IamRequest {

public:
    UpdateAssumeRolePolicyRequest(const UpdateAssumeRolePolicyRequest &other);
    UpdateAssumeRolePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssumeRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
