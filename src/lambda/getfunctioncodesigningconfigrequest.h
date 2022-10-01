// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONCODESIGNINGCONFIGREQUEST_H
#define QTAWS_GETFUNCTIONCODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT GetFunctionCodeSigningConfigRequest : public LambdaRequest {

public:
    GetFunctionCodeSigningConfigRequest(const GetFunctionCodeSigningConfigRequest &other);
    GetFunctionCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
