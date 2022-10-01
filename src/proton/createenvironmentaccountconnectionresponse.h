// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_H
#define QTAWS_CREATEENVIRONMENTACCOUNTCONNECTIONRESPONSE_H

#include "protonresponse.h"
#include "createenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentAccountConnectionResponsePrivate;

class QTAWSPROTON_EXPORT CreateEnvironmentAccountConnectionResponse : public ProtonResponse {
    Q_OBJECT

public:
    CreateEnvironmentAccountConnectionResponse(const CreateEnvironmentAccountConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentAccountConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(CreateEnvironmentAccountConnectionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
