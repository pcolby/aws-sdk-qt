// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSFORMJOBSRESPONSE_H
#define QTAWS_LISTTRANSFORMJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listtransformjobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTransformJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListTransformJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListTransformJobsResponse(const ListTransformJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTransformJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTransformJobsResponse)
    Q_DISABLE_COPY(ListTransformJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
