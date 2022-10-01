// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTENVIRONMENTACCOUNTCONNECTIONRESPONSE_H
#define QTAWS_ACCEPTENVIRONMENTACCOUNTCONNECTIONRESPONSE_H

#include "protonresponse.h"
#include "acceptenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class AcceptEnvironmentAccountConnectionResponsePrivate;

class QTAWSPROTON_EXPORT AcceptEnvironmentAccountConnectionResponse : public ProtonResponse {
    Q_OBJECT

public:
    AcceptEnvironmentAccountConnectionResponse(const AcceptEnvironmentAccountConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptEnvironmentAccountConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(AcceptEnvironmentAccountConnectionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
