// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGAGGREGATORREQUEST_H
#define QTAWS_DELETEFINDINGAGGREGATORREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteFindingAggregatorRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DeleteFindingAggregatorRequest : public SecurityHubRequest {

public:
    DeleteFindingAggregatorRequest(const DeleteFindingAggregatorRequest &other);
    DeleteFindingAggregatorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFindingAggregatorRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
