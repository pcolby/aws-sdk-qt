// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATISTICSRESPONSE_P_H
#define QTAWS_GETQUERYSTATISTICSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStatisticsResponse;

class GetQueryStatisticsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetQueryStatisticsResponsePrivate(GetQueryStatisticsResponse * const q);

    void parseGetQueryStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQueryStatisticsResponse)
    Q_DISABLE_COPY(GetQueryStatisticsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
