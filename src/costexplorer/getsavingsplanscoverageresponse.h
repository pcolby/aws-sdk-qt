// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSCOVERAGERESPONSE_H
#define QTAWS_GETSAVINGSPLANSCOVERAGERESPONSE_H

#include "costexplorerresponse.h"
#include "getsavingsplanscoveragerequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansCoverageResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansCoverageResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetSavingsPlansCoverageResponse(const GetSavingsPlansCoverageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSavingsPlansCoverageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansCoverageResponse)
    Q_DISABLE_COPY(GetSavingsPlansCoverageResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
