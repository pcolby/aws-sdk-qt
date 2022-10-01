// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTKEYPHRASESDETECTIONJOBRESPONSE_H
#define QTAWS_STARTKEYPHRASESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "startkeyphrasesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartKeyPhrasesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartKeyPhrasesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartKeyPhrasesDetectionJobResponse(const StartKeyPhrasesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartKeyPhrasesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartKeyPhrasesDetectionJobResponse)
    Q_DISABLE_COPY(StartKeyPhrasesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
