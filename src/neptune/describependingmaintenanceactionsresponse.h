// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSE_H
#define QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSRESPONSE_H

#include "neptuneresponse.h"
#include "describependingmaintenanceactionsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribePendingMaintenanceActionsResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribePendingMaintenanceActionsResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribePendingMaintenanceActionsResponse(const DescribePendingMaintenanceActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePendingMaintenanceActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePendingMaintenanceActionsResponse)
    Q_DISABLE_COPY(DescribePendingMaintenanceActionsResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
