// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPILATIONJOBSRESPONSE_H
#define QTAWS_LISTCOMPILATIONJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listcompilationjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCompilationJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListCompilationJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListCompilationJobsResponse(const ListCompilationJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCompilationJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCompilationJobsResponse)
    Q_DISABLE_COPY(ListCompilationJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
