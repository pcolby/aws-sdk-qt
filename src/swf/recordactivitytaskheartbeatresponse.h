// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDACTIVITYTASKHEARTBEATRESPONSE_H
#define QTAWS_RECORDACTIVITYTASKHEARTBEATRESPONSE_H

#include "swfresponse.h"
#include "recordactivitytaskheartbeatrequest.h"

namespace QtAws {
namespace Swf {

class RecordActivityTaskHeartbeatResponsePrivate;

class QTAWSSWF_EXPORT RecordActivityTaskHeartbeatResponse : public SwfResponse {
    Q_OBJECT

public:
    RecordActivityTaskHeartbeatResponse(const RecordActivityTaskHeartbeatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RecordActivityTaskHeartbeatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecordActivityTaskHeartbeatResponse)
    Q_DISABLE_COPY(RecordActivityTaskHeartbeatResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
