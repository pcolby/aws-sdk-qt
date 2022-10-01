// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTEULASRESPONSE_H
#define QTAWS_ACCEPTEULASRESPONSE_H

#include "nimbleresponse.h"
#include "accepteulasrequest.h"

namespace QtAws {
namespace Nimble {

class AcceptEulasResponsePrivate;

class QTAWSNIMBLE_EXPORT AcceptEulasResponse : public NimbleResponse {
    Q_OBJECT

public:
    AcceptEulasResponse(const AcceptEulasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptEulasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptEulasResponse)
    Q_DISABLE_COPY(AcceptEulasResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
