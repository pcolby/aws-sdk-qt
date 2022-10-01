// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONURLCONFIGREQUEST_H
#define QTAWS_UPDATEFUNCTIONURLCONFIGREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionUrlConfigRequestPrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionUrlConfigRequest : public LambdaRequest {

public:
    UpdateFunctionUrlConfigRequest(const UpdateFunctionUrlConfigRequest &other);
    UpdateFunctionUrlConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionUrlConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
