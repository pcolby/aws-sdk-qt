// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMLJOBSRESPONSE_H
#define QTAWS_LISTAUTOMLJOBSRESPONSE_H

#include "sagemakerresponse.h"
#include "listautomljobsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAutoMLJobsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListAutoMLJobsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListAutoMLJobsResponse(const ListAutoMLJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAutoMLJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAutoMLJobsResponse)
    Q_DISABLE_COPY(ListAutoMLJobsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
