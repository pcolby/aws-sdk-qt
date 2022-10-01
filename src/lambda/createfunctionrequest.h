// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONREQUEST_H
#define QTAWS_CREATEFUNCTIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionRequestPrivate;

class QTAWSLAMBDA_EXPORT CreateFunctionRequest : public LambdaRequest {

public:
    CreateFunctionRequest(const CreateFunctionRequest &other);
    CreateFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
