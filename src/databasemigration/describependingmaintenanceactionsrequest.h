// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSREQUEST_H
#define QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribePendingMaintenanceActionsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribePendingMaintenanceActionsRequest : public DatabaseMigrationRequest {

public:
    DescribePendingMaintenanceActionsRequest(const DescribePendingMaintenanceActionsRequest &other);
    DescribePendingMaintenanceActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePendingMaintenanceActionsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
