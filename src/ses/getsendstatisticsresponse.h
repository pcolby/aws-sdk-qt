// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDSTATISTICSRESPONSE_H
#define QTAWS_GETSENDSTATISTICSRESPONSE_H

#include "sesresponse.h"
#include "getsendstatisticsrequest.h"

namespace QtAws {
namespace Ses {

class GetSendStatisticsResponsePrivate;

class QTAWSSES_EXPORT GetSendStatisticsResponse : public SesResponse {
    Q_OBJECT

public:
    GetSendStatisticsResponse(const GetSendStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSendStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSendStatisticsResponse)
    Q_DISABLE_COPY(GetSendStatisticsResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
