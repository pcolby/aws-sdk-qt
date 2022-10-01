// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONRESPONSE_H
#define QTAWS_DELETEENVIRONMENTACCOUNTCONNECTIONRESPONSE_H

#include "protonresponse.h"
#include "deleteenvironmentaccountconnectionrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentAccountConnectionResponsePrivate;

class QTAWSPROTON_EXPORT DeleteEnvironmentAccountConnectionResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteEnvironmentAccountConnectionResponse(const DeleteEnvironmentAccountConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentAccountConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentAccountConnectionResponse)
    Q_DISABLE_COPY(DeleteEnvironmentAccountConnectionResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
