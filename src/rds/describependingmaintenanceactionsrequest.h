// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSREQUEST_H
#define QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribePendingMaintenanceActionsRequestPrivate;

class QTAWSRDS_EXPORT DescribePendingMaintenanceActionsRequest : public RdsRequest {

public:
    DescribePendingMaintenanceActionsRequest(const DescribePendingMaintenanceActionsRequest &other);
    DescribePendingMaintenanceActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePendingMaintenanceActionsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
