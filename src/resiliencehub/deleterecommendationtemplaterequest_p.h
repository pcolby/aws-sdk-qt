// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDATIONTEMPLATEREQUEST_P_H
#define QTAWS_DELETERECOMMENDATIONTEMPLATEREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "deleterecommendationtemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteRecommendationTemplateRequest;

class DeleteRecommendationTemplateRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DeleteRecommendationTemplateRequestPrivate(const ResilienceHubRequest::Action action,
                                   DeleteRecommendationTemplateRequest * const q);
    DeleteRecommendationTemplateRequestPrivate(const DeleteRecommendationTemplateRequestPrivate &other,
                                   DeleteRecommendationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecommendationTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
