// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERVERSIONRESPONSE_P_H
#define QTAWS_DELETELAYERVERSIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class DeleteLayerVersionResponse;

class DeleteLayerVersionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit DeleteLayerVersionResponsePrivate(DeleteLayerVersionResponse * const q);

    void parseDeleteLayerVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLayerVersionResponse)
    Q_DISABLE_COPY(DeleteLayerVersionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
