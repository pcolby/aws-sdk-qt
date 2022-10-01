// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTRIBUTORINSIGHTSREQUEST_H
#define QTAWS_UPDATECONTRIBUTORINSIGHTSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContributorInsightsRequestPrivate;

class QTAWSDYNAMODB_EXPORT UpdateContributorInsightsRequest : public DynamoDbRequest {

public:
    UpdateContributorInsightsRequest(const UpdateContributorInsightsRequest &other);
    UpdateContributorInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContributorInsightsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
