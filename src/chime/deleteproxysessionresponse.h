// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROXYSESSIONRESPONSE_H
#define QTAWS_DELETEPROXYSESSIONRESPONSE_H

#include "chimeresponse.h"
#include "deleteproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class DeleteProxySessionResponsePrivate;

class QTAWSCHIME_EXPORT DeleteProxySessionResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteProxySessionResponse(const DeleteProxySessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProxySessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProxySessionResponse)
    Q_DISABLE_COPY(DeleteProxySessionResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
