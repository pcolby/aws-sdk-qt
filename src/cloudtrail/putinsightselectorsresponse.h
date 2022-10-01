// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTSELECTORSRESPONSE_H
#define QTAWS_PUTINSIGHTSELECTORSRESPONSE_H

#include "cloudtrailresponse.h"
#include "putinsightselectorsrequest.h"

namespace QtAws {
namespace CloudTrail {

class PutInsightSelectorsResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT PutInsightSelectorsResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    PutInsightSelectorsResponse(const PutInsightSelectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInsightSelectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInsightSelectorsResponse)
    Q_DISABLE_COPY(PutInsightSelectorsResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
