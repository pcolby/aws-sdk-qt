// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONREQUEST_H
#define QTAWS_GETLAYERVERSIONREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionRequestPrivate;

class QTAWSLAMBDA_EXPORT GetLayerVersionRequest : public LambdaRequest {

public:
    GetLayerVersionRequest(const GetLayerVersionRequest &other);
    GetLayerVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLayerVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
