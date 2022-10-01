// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWOUTPUTRESPONSE_H
#define QTAWS_REMOVEFLOWOUTPUTRESPONSE_H

#include "mediaconnectresponse.h"
#include "removeflowoutputrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowOutputResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowOutputResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    RemoveFlowOutputResponse(const RemoveFlowOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveFlowOutputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowOutputResponse)
    Q_DISABLE_COPY(RemoveFlowOutputResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
