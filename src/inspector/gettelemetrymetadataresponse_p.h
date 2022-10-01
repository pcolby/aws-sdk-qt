// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTELEMETRYMETADATARESPONSE_P_H
#define QTAWS_GETTELEMETRYMETADATARESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class GetTelemetryMetadataResponse;

class GetTelemetryMetadataResponsePrivate : public InspectorResponsePrivate {

public:

    explicit GetTelemetryMetadataResponsePrivate(GetTelemetryMetadataResponse * const q);

    void parseGetTelemetryMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTelemetryMetadataResponse)
    Q_DISABLE_COPY(GetTelemetryMetadataResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
