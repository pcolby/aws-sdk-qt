// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERVERSIONSREQUEST_P_H
#define QTAWS_LISTLAYERVERSIONSREQUEST_P_H

#include "lambdarequest_p.h"
#include "listlayerversionsrequest.h"

namespace QtAws {
namespace Lambda {

class ListLayerVersionsRequest;

class ListLayerVersionsRequestPrivate : public LambdaRequestPrivate {

public:
    ListLayerVersionsRequestPrivate(const LambdaRequest::Action action,
                                   ListLayerVersionsRequest * const q);
    ListLayerVersionsRequestPrivate(const ListLayerVersionsRequestPrivate &other,
                                   ListLayerVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLayerVersionsRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
