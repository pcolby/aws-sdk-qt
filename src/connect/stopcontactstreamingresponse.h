// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTSTREAMINGRESPONSE_H
#define QTAWS_STOPCONTACTSTREAMINGRESPONSE_H

#include "connectresponse.h"
#include "stopcontactstreamingrequest.h"

namespace QtAws {
namespace Connect {

class StopContactStreamingResponsePrivate;

class QTAWSCONNECT_EXPORT StopContactStreamingResponse : public ConnectResponse {
    Q_OBJECT

public:
    StopContactStreamingResponse(const StopContactStreamingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopContactStreamingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopContactStreamingResponse)
    Q_DISABLE_COPY(StopContactStreamingResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
