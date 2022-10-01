// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONREQUEST_H
#define QTAWS_GETFUNCTIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionRequestPrivate;

class QTAWSLAMBDA_EXPORT GetFunctionRequest : public LambdaRequest {

public:
    GetFunctionRequest(const GetFunctionRequest &other);
    GetFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
