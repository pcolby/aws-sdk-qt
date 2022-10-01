// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSRESPONSE_H
#define QTAWS_LISTLABELINGJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listlabelingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListLabelingJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListLabelingJobsResponse(const ListLabelingJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLabelingJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelingJobsResponse)
    Q_DISABLE_COPY(ListLabelingJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
