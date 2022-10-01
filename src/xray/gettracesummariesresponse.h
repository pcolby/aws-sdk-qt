// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACESUMMARIESRESPONSE_H
#define QTAWS_GETTRACESUMMARIESRESPONSE_H

#include "xrayresponse.h"
#include "gettracesummariesrequest.h"

namespace QtAws {
namespace XRay {

class GetTraceSummariesResponsePrivate;

class QTAWSXRAY_EXPORT GetTraceSummariesResponse : public XRayResponse {
    Q_OBJECT

public:
    GetTraceSummariesResponse(const GetTraceSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTraceSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTraceSummariesResponse)
    Q_DISABLE_COPY(GetTraceSummariesResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
