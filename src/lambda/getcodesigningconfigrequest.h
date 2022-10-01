// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODESIGNINGCONFIGREQUEST_H
#define QTAWS_GETCODESIGNINGCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetCodeSigningConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT GetCodeSigningConfigRequest : public LambdaRequest {

public:
    GetCodeSigningConfigRequest(const GetCodeSigningConfigRequest &other);
    GetCodeSigningConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCodeSigningConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
