// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTSTREAMINGRESPONSE_H
#define QTAWS_STARTCONTACTSTREAMINGRESPONSE_H

#include "connectresponse.h"
#include "startcontactstreamingrequest.h"

namespace QtAws {
namespace Connect {

class StartContactStreamingResponsePrivate;

class QTAWSCONNECT_EXPORT StartContactStreamingResponse : public ConnectResponse {
    Q_OBJECT

public:
    StartContactStreamingResponse(const StartContactStreamingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartContactStreamingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContactStreamingResponse)
    Q_DISABLE_COPY(StartContactStreamingResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
