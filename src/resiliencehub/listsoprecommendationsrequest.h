// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOPRECOMMENDATIONSREQUEST_H
#define QTAWS_LISTSOPRECOMMENDATIONSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListSopRecommendationsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListSopRecommendationsRequest : public ResilienceHubRequest {

public:
    ListSopRecommendationsRequest(const ListSopRecommendationsRequest &other);
    ListSopRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSopRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
