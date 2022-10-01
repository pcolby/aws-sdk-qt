// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROCESSINGJOBSRESPONSE_H
#define QTAWS_LISTPROCESSINGJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listprocessingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListProcessingJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListProcessingJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListProcessingJobsResponse(const ListProcessingJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProcessingJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProcessingJobsResponse)
    Q_DISABLE_COPY(ListProcessingJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
