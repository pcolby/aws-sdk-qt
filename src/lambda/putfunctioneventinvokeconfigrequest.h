// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONEVENTINVOKECONFIGREQUEST_H
#define QTAWS_PUTFUNCTIONEVENTINVOKECONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionEventInvokeConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT PutFunctionEventInvokeConfigRequest : public LambdaRequest {

public:
    PutFunctionEventInvokeConfigRequest(const PutFunctionEventInvokeConfigRequest &other);
    PutFunctionEventInvokeConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
