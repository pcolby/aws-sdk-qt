// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEPACKAGINGJOBSRESPONSE_H
#define QTAWS_LISTEDGEPACKAGINGJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listedgepackagingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEdgePackagingJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListEdgePackagingJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListEdgePackagingJobsResponse(const ListEdgePackagingJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEdgePackagingJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEdgePackagingJobsResponse)
    Q_DISABLE_COPY(ListEdgePackagingJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
