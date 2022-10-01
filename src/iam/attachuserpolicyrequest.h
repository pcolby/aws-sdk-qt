// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHUSERPOLICYREQUEST_H
#define QTAWS_ATTACHUSERPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class AttachUserPolicyRequestPrivate;

class QTAWSIAM_EXPORT AttachUserPolicyRequest : public IamRequest {

public:
    AttachUserPolicyRequest(const AttachUserPolicyRequest &other);
    AttachUserPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
