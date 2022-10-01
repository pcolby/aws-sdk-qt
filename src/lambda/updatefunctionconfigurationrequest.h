// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEFUNCTIONCONFIGURATIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionConfigurationRequestPrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionConfigurationRequest : public LambdaRequest {

public:
    UpdateFunctionConfigurationRequest(const UpdateFunctionConfigurationRequest &other);
    UpdateFunctionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionConfigurationRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
