// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGINGJOBRESPONSE_H
#define QTAWS_DESCRIBEMODELPACKAGINGJOBRESPONSE_H

#include "lookoutvisionresponse.h"
#include "describemodelpackagingjobrequest.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelPackagingJobResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT DescribeModelPackagingJobResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    DescribeModelPackagingJobResponse(const DescribeModelPackagingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeModelPackagingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelPackagingJobResponse)
    Q_DISABLE_COPY(DescribeModelPackagingJobResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
