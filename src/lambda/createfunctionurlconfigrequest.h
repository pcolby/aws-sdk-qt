// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONURLCONFIGREQUEST_H
#define QTAWS_CREATEFUNCTIONURLCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionUrlConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT CreateFunctionUrlConfigRequest : public LambdaRequest {

public:
    CreateFunctionUrlConfigRequest(const CreateFunctionUrlConfigRequest &other);
    CreateFunctionUrlConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
