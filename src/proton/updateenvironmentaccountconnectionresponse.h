// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_H
#define QTAWS_UPDATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_H

#include "protonresponse.h"
#include "updateenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentAccountConnectionResponsePrivate;

class QTAWSPROTON_EXPORT UpdateEnvironmentAccountConnectionResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateEnvironmentAccountConnectionResponse(const UpdateEnvironmentAccountConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEnvironmentAccountConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(UpdateEnvironmentAccountConnectionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
