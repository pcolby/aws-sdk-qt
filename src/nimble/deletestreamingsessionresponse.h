// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGSESSIONRESPONSE_H
#define QTAWS_DELETESTREAMINGSESSIONRESPONSE_H

#include "nimbleresponse.h"
#include "deletestreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingSessionResponsePrivate;

class QTAWSNIMBLE_EXPORT DeleteStreamingSessionResponse : public NimbleResponse {
    Q_OBJECT

public:
    DeleteStreamingSessionResponse(const DeleteStreamingSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamingSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamingSessionResponse)
    Q_DISABLE_COPY(DeleteStreamingSessionResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
