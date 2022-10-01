// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONRESPONSE_P_H
#define QTAWS_GETLAYERVERSIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionResponse;

class GetLayerVersionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetLayerVersionResponsePrivate(GetLayerVersionResponse * const q);

    void parseGetLayerVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionResponse)
    Q_DISABLE_COPY(GetLayerVersionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
