// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTEVENTSRESPONSE_H
#define QTAWS_GETINSIGHTEVENTSRESPONSE_H

#include "xrayresponse.h"
#include "getinsighteventsrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightEventsResponsePrivate;

class QTAWSXRAY_EXPORT GetInsightEventsResponse : public XRayResponse {
    Q_OBJECT

public:
    GetInsightEventsResponse(const GetInsightEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightEventsResponse)
    Q_DISABLE_COPY(GetInsightEventsResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
