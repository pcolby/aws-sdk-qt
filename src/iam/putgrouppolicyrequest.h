// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPPOLICYREQUEST_H
#define QTAWS_PUTGROUPPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class PutGroupPolicyRequestPrivate;

class QTAWSIAM_EXPORT PutGroupPolicyRequest : public IamRequest {

public:
    PutGroupPolicyRequest(const PutGroupPolicyRequest &other);
    PutGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
