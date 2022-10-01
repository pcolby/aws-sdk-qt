// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONEVENTINVOKECONFIGREQUEST_H
#define QTAWS_GETFUNCTIONEVENTINVOKECONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionEventInvokeConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT GetFunctionEventInvokeConfigRequest : public LambdaRequest {

public:
    GetFunctionEventInvokeConfigRequest(const GetFunctionEventInvokeConfigRequest &other);
    GetFunctionEventInvokeConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
