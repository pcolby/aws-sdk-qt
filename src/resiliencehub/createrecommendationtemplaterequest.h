// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDATIONTEMPLATEREQUEST_H
#define QTAWS_CREATERECOMMENDATIONTEMPLATEREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class CreateRecommendationTemplateRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT CreateRecommendationTemplateRequest : public ResilienceHubRequest {

public:
    CreateRecommendationTemplateRequest(const CreateRecommendationTemplateRequest &other);
    CreateRecommendationTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecommendationTemplateRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
