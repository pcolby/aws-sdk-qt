// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDATIONTEMPLATESREQUEST_H
#define QTAWS_LISTRECOMMENDATIONTEMPLATESREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListRecommendationTemplatesRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListRecommendationTemplatesRequest : public ResilienceHubRequest {

public:
    ListRecommendationTemplatesRequest(const ListRecommendationTemplatesRequest &other);
    ListRecommendationTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecommendationTemplatesRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
