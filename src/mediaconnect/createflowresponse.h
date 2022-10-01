// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWRESPONSE_H
#define QTAWS_CREATEFLOWRESPONSE_H

#include "mediaconnectresponse.h"
#include "createflowrequest.h"

namespace QtAws {
namespace MediaConnect {

class CreateFlowResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT CreateFlowResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    CreateFlowResponse(const CreateFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowResponse)
    Q_DISABLE_COPY(CreateFlowResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
