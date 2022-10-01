// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBGPFAILOVERTESTRESPONSE_H
#define QTAWS_STOPBGPFAILOVERTESTRESPONSE_H

#include "directconnectresponse.h"
#include "stopbgpfailovertestrequest.h"

namespace QtAws {
namespace DirectConnect {

class StopBgpFailoverTestResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT StopBgpFailoverTestResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    StopBgpFailoverTestResponse(const StopBgpFailoverTestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopBgpFailoverTestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBgpFailoverTestResponse)
    Q_DISABLE_COPY(StopBgpFailoverTestResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
