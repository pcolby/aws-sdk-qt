// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICDATARESPONSE_H
#define QTAWS_GETMETRICDATARESPONSE_H

#include "connectresponse.h"
#include "getmetricdatarequest.h"

namespace QtAws {
namespace Connect {

class GetMetricDataResponsePrivate;

class QTAWSCONNECT_EXPORT GetMetricDataResponse : public ConnectResponse {
    Q_OBJECT

public:
    GetMetricDataResponse(const GetMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricDataResponse)
    Q_DISABLE_COPY(GetMetricDataResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
