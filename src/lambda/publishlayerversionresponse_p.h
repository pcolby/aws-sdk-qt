// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHLAYERVERSIONRESPONSE_P_H
#define QTAWS_PUBLISHLAYERVERSIONRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class PublishLayerVersionResponse;

class PublishLayerVersionResponsePrivate : public LambdaResponsePrivate {

public:

    explicit PublishLayerVersionResponsePrivate(PublishLayerVersionResponse * const q);

    void parsePublishLayerVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishLayerVersionResponse)
    Q_DISABLE_COPY(PublishLayerVersionResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
