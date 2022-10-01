// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMODELPACKAGINGJOBRESPONSE_H
#define QTAWS_STARTMODELPACKAGINGJOBRESPONSE_H

#include "lookoutvisionresponse.h"
#include "startmodelpackagingjobrequest.h"

namespace QtAws {
namespace LookoutVision {

class StartModelPackagingJobResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT StartModelPackagingJobResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    StartModelPackagingJobResponse(const StartModelPackagingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartModelPackagingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartModelPackagingJobResponse)
    Q_DISABLE_COPY(StartModelPackagingJobResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
