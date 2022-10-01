// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTTRACESEGMENTSRESPONSE_H
#define QTAWS_PUTTRACESEGMENTSRESPONSE_H

#include "xrayresponse.h"
#include "puttracesegmentsrequest.h"

namespace QtAws {
namespace XRay {

class PutTraceSegmentsResponsePrivate;

class QTAWSXRAY_EXPORT PutTraceSegmentsResponse : public XRayResponse {
    Q_OBJECT

public:
    PutTraceSegmentsResponse(const PutTraceSegmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutTraceSegmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutTraceSegmentsResponse)
    Q_DISABLE_COPY(PutTraceSegmentsResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
