// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEREQUEST_H
#define QTAWS_INVOKEREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class InvokeRequestPrivate;

class QTAWSLAMBDA_EXPORT InvokeRequest : public LambdaRequest {

public:
    InvokeRequest(const InvokeRequest &other);
    InvokeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
