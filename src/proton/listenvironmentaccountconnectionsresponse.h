// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSRESPONSE_H
#define QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSRESPONSE_H

#include "protonresponse.h"
#include "listenvironmentaccountconnectionsrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentAccountConnectionsResponsePrivate;

class QTAWSPROTON_EXPORT ListEnvironmentAccountConnectionsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListEnvironmentAccountConnectionsResponse(const ListEnvironmentAccountConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnvironmentAccountConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentAccountConnectionsResponse)
    Q_DISABLE_COPY(ListEnvironmentAccountConnectionsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
