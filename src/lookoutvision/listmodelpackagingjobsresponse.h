// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGINGJOBSRESPONSE_H
#define QTAWS_LISTMODELPACKAGINGJOBSRESPONSE_H

#include "lookoutvisionresponse.h"
#include "listmodelpackagingjobsrequest.h"

namespace QtAws {
namespace LookoutVision {

class ListModelPackagingJobsResponsePrivate;

class QTAWSLOOKOUTVISION_EXPORT ListModelPackagingJobsResponse : public LookoutVisionResponse {
    Q_OBJECT

public:
    ListModelPackagingJobsResponse(const ListModelPackagingJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelPackagingJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelPackagingJobsResponse)
    Q_DISABLE_COPY(ListModelPackagingJobsResponse)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
