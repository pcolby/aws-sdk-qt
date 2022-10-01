// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONRESPONSE_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONRESPONSE_H

#include "costexplorerresponse.h"
#include "getsavingsplansutilizationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansUtilizationResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetSavingsPlansUtilizationResponse(const GetSavingsPlansUtilizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSavingsPlansUtilizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansUtilizationResponse)
    Q_DISABLE_COPY(GetSavingsPlansUtilizationResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
