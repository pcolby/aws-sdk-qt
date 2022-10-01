// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFUNCTIONCODESIGNINGCONFIGREQUEST_H
#define QTAWS_PUTFUNCTIONCODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class PutFunctionCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT PutFunctionCodeSigningConfigRequest : public LambdaRequest {

public:
    PutFunctionCodeSigningConfigRequest(const PutFunctionCodeSigningConfigRequest &other);
    PutFunctionCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFunctionCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
