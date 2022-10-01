// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONCOMPONENTSREQUEST_H
#define QTAWS_LISTAPPLICATIONCOMPONENTSREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListApplicationComponentsRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListApplicationComponentsRequest : public MigrationHubStrategyRequest {

public:
    ListApplicationComponentsRequest(const ListApplicationComponentsRequest &other);
    ListApplicationComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationComponentsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
