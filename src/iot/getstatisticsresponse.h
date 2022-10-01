// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATISTICSRESPONSE_H
#define QTAWS_GETSTATISTICSRESPONSE_H

#include "iotresponse.h"
#include "getstatisticsrequest.h"

namespace QtAws {
namespace IoT {

class GetStatisticsResponsePrivate;

class QTAWSIOT_EXPORT GetStatisticsResponse : public IoTResponse {
    Q_OBJECT

public:
    GetStatisticsResponse(const GetStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStatisticsResponse)
    Q_DISABLE_COPY(GetStatisticsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
