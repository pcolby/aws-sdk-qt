// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONURLCONFIGREQUEST_H
#define QTAWS_GETFUNCTIONURLCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionUrlConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT GetFunctionUrlConfigRequest : public LambdaRequest {

public:
    GetFunctionUrlConfigRequest(const GetFunctionUrlConfigRequest &other);
    GetFunctionUrlConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
