// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOMINANTLANGUAGEDETECTIONJOBRESPONSE_H
#define QTAWS_STARTDOMINANTLANGUAGEDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "startdominantlanguagedetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartDominantLanguageDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartDominantLanguageDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartDominantLanguageDetectionJobResponse(const StartDominantLanguageDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDominantLanguageDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDominantLanguageDetectionJobResponse)
    Q_DISABLE_COPY(StartDominantLanguageDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
