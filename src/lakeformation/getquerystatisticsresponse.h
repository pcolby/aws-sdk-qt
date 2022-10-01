// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATISTICSRESPONSE_H
#define QTAWS_GETQUERYSTATISTICSRESPONSE_H

#include "lakeformationresponse.h"
#include "getquerystatisticsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStatisticsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetQueryStatisticsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetQueryStatisticsResponse(const GetQueryStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueryStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryStatisticsResponse)
    Q_DISABLE_COPY(GetQueryStatisticsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
