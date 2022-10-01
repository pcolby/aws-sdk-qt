// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCONCURRENCYREQUEST_H
#define QTAWS_GETFUNCTIONCONCURRENCYREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionConcurrencyRequestPrivate;

class QTAWSLAMBDA_EXPORT GetFunctionConcurrencyRequest : public LambdaRequest {

public:
    GetFunctionConcurrencyRequest(const GetFunctionConcurrencyRequest &other);
    GetFunctionConcurrencyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionConcurrencyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
