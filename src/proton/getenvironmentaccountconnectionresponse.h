// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTACCOUNTCONNECTIONRESPONSE_H
#define QTAWS_GETENVIRONMENTACCOUNTCONNECTIONRESPONSE_H

#include "protonresponse.h"
#include "getenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentAccountConnectionResponsePrivate;

class QTAWSPROTON_EXPORT GetEnvironmentAccountConnectionResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetEnvironmentAccountConnectionResponse(const GetEnvironmentAccountConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnvironmentAccountConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(GetEnvironmentAccountConnectionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
