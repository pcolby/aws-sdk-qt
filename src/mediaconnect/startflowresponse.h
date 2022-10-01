// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLOWRESPONSE_H
#define QTAWS_STARTFLOWRESPONSE_H

#include "mediaconnectresponse.h"
#include "startflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class StartFlowResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT StartFlowResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    StartFlowResponse(const StartFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFlowResponse)
    Q_DISABLE_COPY(StartFlowResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
