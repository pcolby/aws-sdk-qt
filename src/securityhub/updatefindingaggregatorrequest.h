// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGAGGREGATORREQUEST_H
#define QTAWS_UPDATEFINDINGAGGREGATORREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateFindingAggregatorRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateFindingAggregatorRequest : public SecurityHubRequest {

public:
    UpdateFindingAggregatorRequest(const UpdateFindingAggregatorRequest &other);
    UpdateFindingAggregatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
