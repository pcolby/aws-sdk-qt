// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERSREQUEST_H
#define QTAWS_LISTSERVERSREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListServersRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListServersRequest : public MigrationHubStrategyRequest {

public:
    ListServersRequest(const ListServersRequest &other);
    ListServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServersRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
