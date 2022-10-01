// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERVERSIONSREQUEST_H
#define QTAWS_LISTLAYERVERSIONSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListLayerVersionsRequestPrivate;

class QTAWSLAMBDA_EXPORT ListLayerVersionsRequest : public LambdaRequest {

public:
    ListLayerVersionsRequest(const ListLayerVersionsRequest &other);
    ListLayerVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLayerVersionsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
