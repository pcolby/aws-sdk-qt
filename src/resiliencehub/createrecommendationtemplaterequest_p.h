// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDATIONTEMPLATEREQUEST_P_H
#define QTAWS_CREATERECOMMENDATIONTEMPLATEREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "createrecommendationtemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class CreateRecommendationTemplateRequest;

class CreateRecommendationTemplateRequestPrivate : public ResilienceHubRequestPrivate {

public:
    CreateRecommendationTemplateRequestPrivate(const ResilienceHubRequest::Action action,
                                   CreateRecommendationTemplateRequest * const q);
    CreateRecommendationTemplateRequestPrivate(const CreateRecommendationTemplateRequestPrivate &other,
                                   CreateRecommendationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecommendationTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
