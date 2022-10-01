// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSTATISTICSRESPONSE_H
#define QTAWS_GETFINDINGSTATISTICSRESPONSE_H

#include "macie2response.h"
#include "getfindingstatisticsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingStatisticsResponsePrivate;

class QTAWSMACIE2_EXPORT GetFindingStatisticsResponse : public Macie2Response {
    Q_OBJECT

public:
    GetFindingStatisticsResponse(const GetFindingStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingStatisticsResponse)
    Q_DISABLE_COPY(GetFindingStatisticsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
