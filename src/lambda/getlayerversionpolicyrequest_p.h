// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONPOLICYREQUEST_P_H
#define QTAWS_GETLAYERVERSIONPOLICYREQUEST_P_H

#include "lambdarequest_p.h"
#include "getlayerversionpolicyrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionPolicyRequest;

class GetLayerVersionPolicyRequestPrivate : public LambdaRequestPrivate {

public:
    GetLayerVersionPolicyRequestPrivate(const LambdaRequest::Action action,
                                   GetLayerVersionPolicyRequest * const q);
    GetLayerVersionPolicyRequestPrivate(const GetLayerVersionPolicyRequestPrivate &other,
                                   GetLayerVersionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionPolicyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
