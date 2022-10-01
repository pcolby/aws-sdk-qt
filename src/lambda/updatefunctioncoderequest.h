// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONCODEREQUEST_H
#define QTAWS_UPDATEFUNCTIONCODEREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class UpdateFunctionCodeRequestPrivate;

class QTAWSLAMBDA_EXPORT UpdateFunctionCodeRequest : public LambdaRequest {

public:
    UpdateFunctionCodeRequest(const UpdateFunctionCodeRequest &other);
    UpdateFunctionCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionCodeRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
