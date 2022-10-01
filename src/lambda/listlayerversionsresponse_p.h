// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERVERSIONSRESPONSE_P_H
#define QTAWS_LISTLAYERVERSIONSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListLayerVersionsResponse;

class ListLayerVersionsResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListLayerVersionsResponsePrivate(ListLayerVersionsResponse * const q);

    void parseListLayerVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLayerVersionsResponse)
    Q_DISABLE_COPY(ListLayerVersionsResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
