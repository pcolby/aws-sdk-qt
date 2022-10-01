// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSFORWORKTEAMRESPONSE_H
#define QTAWS_LISTLABELINGJOBSFORWORKTEAMRESPONSE_H

#include "sagemakerresponse.h"
#include "listlabelingjobsforworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsForWorkteamResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListLabelingJobsForWorkteamResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListLabelingJobsForWorkteamResponse(const ListLabelingJobsForWorkteamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLabelingJobsForWorkteamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelingJobsForWorkteamResponse)
    Q_DISABLE_COPY(ListLabelingJobsForWorkteamResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
