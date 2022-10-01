// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTELEMETRYRECORDSRESPONSE_H
#define QTAWS_PUTTELEMETRYRECORDSRESPONSE_H

#include "xrayresponse.h"
#include "puttelemetryrecordsrequest.h"

namespace QtAws {
namespace XRay {

class PutTelemetryRecordsResponsePrivate;

class QTAWSXRAY_EXPORT PutTelemetryRecordsResponse : public XRayResponse {
    Q_OBJECT

public:
    PutTelemetryRecordsResponse(const PutTelemetryRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutTelemetryRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutTelemetryRecordsResponse)
    Q_DISABLE_COPY(PutTelemetryRecordsResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
