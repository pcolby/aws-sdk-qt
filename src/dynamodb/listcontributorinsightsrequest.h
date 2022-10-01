// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTRIBUTORINSIGHTSREQUEST_H
#define QTAWS_LISTCONTRIBUTORINSIGHTSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ListContributorInsightsRequestPrivate;

class QTAWSDYNAMODB_EXPORT ListContributorInsightsRequest : public DynamoDbRequest {

public:
    ListContributorInsightsRequest(const ListContributorInsightsRequest &other);
    ListContributorInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContributorInsightsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
