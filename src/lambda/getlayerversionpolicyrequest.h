// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONPOLICYREQUEST_H
#define QTAWS_GETLAYERVERSIONPOLICYREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionPolicyRequestPrivate;

class QTAWSLAMBDA_EXPORT GetLayerVersionPolicyRequest : public LambdaRequest {

public:
    GetLayerVersionPolicyRequest(const GetLayerVersionPolicyRequest &other);
    GetLayerVersionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLayerVersionPolicyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
