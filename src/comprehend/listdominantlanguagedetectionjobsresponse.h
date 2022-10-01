// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMINANTLANGUAGEDETECTIONJOBSRESPONSE_H
#define QTAWS_LISTDOMINANTLANGUAGEDETECTIONJOBSRESPONSE_H

#include "comprehendresponse.h"
#include "listdominantlanguagedetectionjobsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDominantLanguageDetectionJobsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListDominantLanguageDetectionJobsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListDominantLanguageDetectionJobsResponse(const ListDominantLanguageDetectionJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDominantLanguageDetectionJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDominantLanguageDetectionJobsResponse)
    Q_DISABLE_COPY(ListDominantLanguageDetectionJobsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
