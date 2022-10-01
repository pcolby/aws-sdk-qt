// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROXYSESSIONRESPONSE_H
#define QTAWS_UPDATEPROXYSESSIONRESPONSE_H

#include "chimeresponse.h"
#include "updateproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class UpdateProxySessionResponsePrivate;

class QTAWSCHIME_EXPORT UpdateProxySessionResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateProxySessionResponse(const UpdateProxySessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProxySessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProxySessionResponse)
    Q_DISABLE_COPY(UpdateProxySessionResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
