// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREANALYSISRESPONSE_H
#define QTAWS_RESTOREANALYSISRESPONSE_H

#include "quicksightresponse.h"
#include "restoreanalysisrequest.h"

namespace QtAws {
namespace QuickSight {

class RestoreAnalysisResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT RestoreAnalysisResponse : public QuickSightResponse {
    Q_OBJECT

public:
    RestoreAnalysisResponse(const RestoreAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreAnalysisResponse)
    Q_DISABLE_COPY(RestoreAnalysisResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
