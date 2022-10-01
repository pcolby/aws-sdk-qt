// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYPLANNINGRESPONSE_H
#define QTAWS_STARTQUERYPLANNINGRESPONSE_H

#include "lakeformationresponse.h"
#include "startqueryplanningrequest.h"

namespace QtAws {
namespace LakeFormation {

class StartQueryPlanningResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT StartQueryPlanningResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    StartQueryPlanningResponse(const StartQueryPlanningRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartQueryPlanningRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartQueryPlanningResponse)
    Q_DISABLE_COPY(StartQueryPlanningResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
