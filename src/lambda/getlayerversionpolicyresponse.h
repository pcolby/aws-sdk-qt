// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONPOLICYRESPONSE_H
#define QTAWS_GETLAYERVERSIONPOLICYRESPONSE_H

#include "lambdaresponse.h"
#include "getlayerversionpolicyrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionPolicyResponsePrivate;

class QTAWSLAMBDA_EXPORT GetLayerVersionPolicyResponse : public LambdaResponse {
    Q_OBJECT

public:
    GetLayerVersionPolicyResponse(const GetLayerVersionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLayerVersionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLayerVersionPolicyResponse)
    Q_DISABLE_COPY(GetLayerVersionPolicyResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
