// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGSESSIONSRESPONSE_H
#define QTAWS_LISTSTREAMINGSESSIONSRESPONSE_H

#include "nimbleresponse.h"
#include "liststreamingsessionsrequest.h"

namespace QtAws {
namespace Nimble {

class ListStreamingSessionsResponsePrivate;

class QTAWSNIMBLE_EXPORT ListStreamingSessionsResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListStreamingSessionsResponse(const ListStreamingSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamingSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamingSessionsResponse)
    Q_DISABLE_COPY(ListStreamingSessionsResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
