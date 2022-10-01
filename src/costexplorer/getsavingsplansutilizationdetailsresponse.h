// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSRESPONSE_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSRESPONSE_H

#include "costexplorerresponse.h"
#include "getsavingsplansutilizationdetailsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationDetailsResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansUtilizationDetailsResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetSavingsPlansUtilizationDetailsResponse(const GetSavingsPlansUtilizationDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSavingsPlansUtilizationDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansUtilizationDetailsResponse)
    Q_DISABLE_COPY(GetSavingsPlansUtilizationDetailsResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
