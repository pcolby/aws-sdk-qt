// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGAGGREGATORREQUEST_H
#define QTAWS_GETFINDINGAGGREGATORREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingAggregatorRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetFindingAggregatorRequest : public SecurityHubRequest {

public:
    GetFindingAggregatorRequest(const GetFindingAggregatorRequest &other);
    GetFindingAggregatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
