// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPOLICYREQUEST_H
#define QTAWS_PUTROLEPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class PutRolePolicyRequestPrivate;

class QTAWSIAM_EXPORT PutRolePolicyRequest : public IamRequest {

public:
    PutRolePolicyRequest(const PutRolePolicyRequest &other);
    PutRolePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
