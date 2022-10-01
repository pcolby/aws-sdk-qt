// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROXYSESSIONRESPONSE_H
#define QTAWS_GETPROXYSESSIONRESPONSE_H

#include "chimeresponse.h"
#include "getproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class GetProxySessionResponsePrivate;

class QTAWSCHIME_EXPORT GetProxySessionResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetProxySessionResponse(const GetProxySessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProxySessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProxySessionResponse)
    Q_DISABLE_COPY(GetProxySessionResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
