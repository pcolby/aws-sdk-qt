// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTESTRECOMMENDATIONSREQUEST_H
#define QTAWS_LISTTESTRECOMMENDATIONSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListTestRecommendationsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListTestRecommendationsRequest : public ResilienceHubRequest {

public:
    ListTestRecommendationsRequest(const ListTestRecommendationsRequest &other);
    ListTestRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTestRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
