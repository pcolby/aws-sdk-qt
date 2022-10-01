// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTOPICSDETECTIONJOBRESPONSE_H
#define QTAWS_STARTTOPICSDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "starttopicsdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StartTopicsDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StartTopicsDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StartTopicsDetectionJobResponse(const StartTopicsDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTopicsDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTopicsDetectionJobResponse)
    Q_DISABLE_COPY(StartTopicsDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
