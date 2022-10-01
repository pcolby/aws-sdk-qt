// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONSREQUEST_H
#define QTAWS_LISTRECOMMENDATIONSREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRecommendationsRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListRecommendationsRequest : public CodeGuruReviewerRequest {

public:
    ListRecommendationsRequest(const ListRecommendationsRequest &other);
    ListRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendationsRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
