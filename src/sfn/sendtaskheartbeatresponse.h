// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKHEARTBEATRESPONSE_H
#define QTAWS_SENDTASKHEARTBEATRESPONSE_H

#include "sfnresponse.h"
#include "sendtaskheartbeatrequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskHeartbeatResponsePrivate;

class QTAWSSFN_EXPORT SendTaskHeartbeatResponse : public SfnResponse {
    Q_OBJECT

public:
    SendTaskHeartbeatResponse(const SendTaskHeartbeatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendTaskHeartbeatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTaskHeartbeatResponse)
    Q_DISABLE_COPY(SendTaskHeartbeatResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
