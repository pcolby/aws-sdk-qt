// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMRECOMMENDATIONSREQUEST_H
#define QTAWS_LISTALARMRECOMMENDATIONSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAlarmRecommendationsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAlarmRecommendationsRequest : public ResilienceHubRequest {

public:
    ListAlarmRecommendationsRequest(const ListAlarmRecommendationsRequest &other);
    ListAlarmRecommendationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmRecommendationsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
