// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWOUTPUTRESPONSE_H
#define QTAWS_UPDATEFLOWOUTPUTRESPONSE_H

#include "mediaconnectresponse.h"
#include "updateflowoutputrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowOutputResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowOutputResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    UpdateFlowOutputResponse(const UpdateFlowOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFlowOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowOutputResponse)
    Q_DISABLE_COPY(UpdateFlowOutputResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
