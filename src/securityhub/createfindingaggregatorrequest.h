// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGAGGREGATORREQUEST_H
#define QTAWS_CREATEFINDINGAGGREGATORREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class CreateFindingAggregatorRequestPrivate;

class QTAWSSECURITYHUB_EXPORT CreateFindingAggregatorRequest : public SecurityHubRequest {

public:
    CreateFindingAggregatorRequest(const CreateFindingAggregatorRequest &other);
    CreateFindingAggregatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
