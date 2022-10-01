// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H
#define QTAWS_UPDATEFUNCTIONEVENTINVOKECONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionEventInvokeConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionEventInvokeConfigRequest : public LambdaRequest {

public:
    UpdateFunctionEventInvokeConfigRequest(const UpdateFunctionEventInvokeConfigRequest &other);
    UpdateFunctionEventInvokeConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
