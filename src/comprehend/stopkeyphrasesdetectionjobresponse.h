// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPKEYPHRASESDETECTIONJOBRESPONSE_H
#define QTAWS_STOPKEYPHRASESDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stopkeyphrasesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopKeyPhrasesDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopKeyPhrasesDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopKeyPhrasesDetectionJobResponse(const StopKeyPhrasesDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopKeyPhrasesDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopKeyPhrasesDetectionJobResponse)
    Q_DISABLE_COPY(StopKeyPhrasesDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
