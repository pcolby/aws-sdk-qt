// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHGROUPPOLICYREQUEST_H
#define QTAWS_DETACHGROUPPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DetachGroupPolicyRequestPrivate;

class QTAWSIAM_EXPORT DetachGroupPolicyRequest : public IamRequest {

public:
    DetachGroupPolicyRequest(const DetachGroupPolicyRequest &other);
    DetachGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
