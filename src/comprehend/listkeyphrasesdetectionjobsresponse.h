// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYPHRASESDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTKEYPHRASESDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listkeyphrasesdetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListKeyPhrasesDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListKeyPhrasesDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListKeyPhrasesDetectionJobsResponse(const ListKeyPhrasesDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListKeyPhrasesDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeyPhrasesDetectionJobsResponse)
    Q_DISABLE_COPY(ListKeyPhrasesDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
