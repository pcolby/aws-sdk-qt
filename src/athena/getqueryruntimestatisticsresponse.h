// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRUNTIMESTATISTICSRESPONSE_H
#define QTAWS_GETQUERYRUNTIMESTATISTICSRESPONSE_H

#include "athenaresponse.h"
#include "getqueryruntimestatisticsrequest.h"

namespace QtAws {
namespace Athena {

class GetQueryRuntimeStatisticsResponsePrivate;

class QTAWSATHENA_EXPORT GetQueryRuntimeStatisticsResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetQueryRuntimeStatisticsResponse(const GetQueryRuntimeStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueryRuntimeStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryRuntimeStatisticsResponse)
    Q_DISABLE_COPY(GetQueryRuntimeStatisticsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
