// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERDETAILSREQUEST_H
#define QTAWS_GETSERVERDETAILSREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetServerDetailsRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetServerDetailsRequest : public MigrationHubStrategyRequest {

public:
    GetServerDetailsRequest(const GetServerDetailsRequest &other);
    GetServerDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServerDetailsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
