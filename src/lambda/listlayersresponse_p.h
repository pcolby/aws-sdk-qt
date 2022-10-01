// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERSRESPONSE_P_H
#define QTAWS_LISTLAYERSRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class ListLayersResponse;

class ListLayersResponsePrivate : public LambdaResponsePrivate {

public:

    explicit ListLayersResponsePrivate(ListLayersResponse * const q);

    void parseListLayersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLayersResponse)
    Q_DISABLE_COPY(ListLayersResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
