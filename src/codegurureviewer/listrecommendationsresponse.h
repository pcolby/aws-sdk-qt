// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONSRESPONSE_H
#define QTAWS_LISTRECOMMENDATIONSRESPONSE_H

#include "codegurureviewerresponse.h"
#include "listrecommendationsrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationsResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListRecommendationsResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    ListRecommendationsResponse(const ListRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendationsResponse)
    Q_DISABLE_COPY(ListRecommendationsResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
