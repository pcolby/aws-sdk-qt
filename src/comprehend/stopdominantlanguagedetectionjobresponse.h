// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBRESPONSE_H
#define QTAWS_STOPDOMINANTLANGUAGEDETECTIONJOBRESPONSE_H

#include "comprehendresponse.h"
#include "stopdominantlanguagedetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class StopDominantLanguageDetectionJobResponsePrivate;

class QTAWSCOMPREHEND_EXPORT StopDominantLanguageDetectionJobResponse : public ComprehendResponse {
    Q_OBJECT

public:
    StopDominantLanguageDetectionJobResponse(const StopDominantLanguageDetectionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDominantLanguageDetectionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDominantLanguageDetectionJobResponse)
    Q_DISABLE_COPY(StopDominantLanguageDetectionJobResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
