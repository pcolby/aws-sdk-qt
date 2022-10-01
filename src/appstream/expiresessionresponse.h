// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPIRESESSIONRESPONSE_H
#define QTAWS_EXPIRESESSIONRESPONSE_H

#include "appstreamresponse.h"
#include "expiresessionrequest.h"

namespace QtAws {
namespace AppStream {

class ExpireSessionResponsePrivate;

class QTAWSAPPSTREAM_EXPORT ExpireSessionResponse : public AppStreamResponse {
    Q_OBJECT

public:
    ExpireSessionResponse(const ExpireSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExpireSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExpireSessionResponse)
    Q_DISABLE_COPY(ExpireSessionResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
