// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHROLEPOLICYREQUEST_H
#define QTAWS_DETACHROLEPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DetachRolePolicyRequestPrivate;

class QTAWSIAM_EXPORT DetachRolePolicyRequest : public IamRequest {

public:
    DetachRolePolicyRequest(const DetachRolePolicyRequest &other);
    DetachRolePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
