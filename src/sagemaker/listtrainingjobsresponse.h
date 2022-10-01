// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSRESPONSE_H
#define QTAWS_LISTTRAININGJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listtrainingjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListTrainingJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListTrainingJobsResponse(const ListTrainingJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrainingJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrainingJobsResponse)
    Q_DISABLE_COPY(ListTrainingJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
