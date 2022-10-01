// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROXYSESSIONRESPONSE_H
#define QTAWS_CREATEPROXYSESSIONRESPONSE_H

#include "chimeresponse.h"
#include "createproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class CreateProxySessionResponsePrivate;

class QTAWSCHIME_EXPORT CreateProxySessionResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateProxySessionResponse(const CreateProxySessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProxySessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProxySessionResponse)
    Q_DISABLE_COPY(CreateProxySessionResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
