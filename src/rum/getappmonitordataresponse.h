// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORDATARESPONSE_H
#define QTAWS_GETAPPMONITORDATARESPONSE_H

#include "rumresponse.h"
#include "getappmonitordatarequest.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorDataResponsePrivate;

class QTAWSRUM_EXPORT GetAppMonitorDataResponse : public RumResponse {
    Q_OBJECT

public:
    GetAppMonitorDataResponse(const GetAppMonitorDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppMonitorDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppMonitorDataResponse)
    Q_DISABLE_COPY(GetAppMonitorDataResponse)

};

} // namespace Rum
} // namespace QtAws

#endif
