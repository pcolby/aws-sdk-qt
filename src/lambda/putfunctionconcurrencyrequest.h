// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCONCURRENCYREQUEST_H
#define QTAWS_PUTFUNCTIONCONCURRENCYREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionConcurrencyRequestPrivate;

class QTAWSLAMBDA_EXPORT PutFunctionConcurrencyRequest : public LambdaRequest {

public:
    PutFunctionConcurrencyRequest(const PutFunctionConcurrencyRequest &other);
    PutFunctionConcurrencyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFunctionConcurrencyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
