// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHGROUPPOLICYREQUEST_H
#define QTAWS_ATTACHGROUPPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class AttachGroupPolicyRequestPrivate;

class QTAWSIAM_EXPORT AttachGroupPolicyRequest : public IamRequest {

public:
    AttachGroupPolicyRequest(const AttachGroupPolicyRequest &other);
    AttachGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
