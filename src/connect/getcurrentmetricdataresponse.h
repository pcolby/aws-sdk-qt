// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTMETRICDATARESPONSE_H
#define QTAWS_GETCURRENTMETRICDATARESPONSE_H

#include "connectresponse.h"
#include "getcurrentmetricdatarequest.h"

namespace QtAws {
namespace Connect {

class GetCurrentMetricDataResponsePrivate;

class QTAWSCONNECT_EXPORT GetCurrentMetricDataResponse : public ConnectResponse {
    Q_OBJECT

public:
    GetCurrentMetricDataResponse(const GetCurrentMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCurrentMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCurrentMetricDataResponse)
    Q_DISABLE_COPY(GetCurrentMetricDataResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
