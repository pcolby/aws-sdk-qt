// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTDETAILSREQUEST_H
#define QTAWS_GETAPPLICATIONCOMPONENTDETAILSREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentDetailsRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetApplicationComponentDetailsRequest : public MigrationHubStrategyRequest {

public:
    GetApplicationComponentDetailsRequest(const GetApplicationComponentDetailsRequest &other);
    GetApplicationComponentDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationComponentDetailsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
