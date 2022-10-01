// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWRESPONSE_H
#define QTAWS_UPDATEFLOWRESPONSE_H

#include "mediaconnectresponse.h"
#include "updateflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    UpdateFlowResponse(const UpdateFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowResponse)
    Q_DISABLE_COPY(UpdateFlowResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
