// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONRESPONSE_H
#define QTAWS_REJECTENVIRONMENTACCOUNTCONNECTIONRESPONSE_H

#include "protonresponse.h"
#include "rejectenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class RejectEnvironmentAccountConnectionResponsePrivate;

class QTAWSPROTON_EXPORT RejectEnvironmentAccountConnectionResponse : public ProtonResponse {
    Q_OBJECT

public:
    RejectEnvironmentAccountConnectionResponse(const RejectEnvironmentAccountConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectEnvironmentAccountConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(RejectEnvironmentAccountConnectionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
