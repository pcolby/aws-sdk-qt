// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTORSREQUEST_H
#define QTAWS_LISTCOLLECTORSREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListCollectorsRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListCollectorsRequest : public MigrationHubStrategyRequest {

public:
    ListCollectorsRequest(const ListCollectorsRequest &other);
    ListCollectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCollectorsRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
