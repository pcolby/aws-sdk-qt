// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORRESPONSE_H
#define QTAWS_GETAPPMONITORRESPONSE_H

#include "rumresponse.h"
#include "getappmonitorrequest.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorResponsePrivate;

class QTAWSRUM_EXPORT GetAppMonitorResponse : public RumResponse {
    Q_OBJECT

public:
    GetAppMonitorResponse(const GetAppMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppMonitorResponse)
    Q_DISABLE_COPY(GetAppMonitorResponse)

};

} // namespace Rum
} // namespace QtAws

#endif
