// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTELEMETRYMETADATARESPONSE_H
#define QTAWS_GETTELEMETRYMETADATARESPONSE_H

#include "inspectorresponse.h"
#include "gettelemetrymetadatarequest.h"

namespace QtAws {
namespace Inspector {

class GetTelemetryMetadataResponsePrivate;

class QTAWSINSPECTOR_EXPORT GetTelemetryMetadataResponse : public InspectorResponse {
    Q_OBJECT

public:
    GetTelemetryMetadataResponse(const GetTelemetryMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTelemetryMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTelemetryMetadataResponse)
    Q_DISABLE_COPY(GetTelemetryMetadataResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
