// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHROLEPOLICYREQUEST_H
#define QTAWS_ATTACHROLEPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class AttachRolePolicyRequestPrivate;

class QTAWSIAM_EXPORT AttachRolePolicyRequest : public IamRequest {

public:
    AttachRolePolicyRequest(const AttachRolePolicyRequest &other);
    AttachRolePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
