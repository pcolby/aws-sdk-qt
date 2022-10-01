// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERRESPONSE_H
#define QTAWS_REMOVECLIENTIDFROMOPENIDCONNECTPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "removeclientidfromopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class RemoveClientIDFromOpenIDConnectProviderResponsePrivate;

class QTAWSIAM_EXPORT RemoveClientIDFromOpenIDConnectProviderResponse : public IamResponse {
    Q_OBJECT

public:
    RemoveClientIDFromOpenIDConnectProviderResponse(const RemoveClientIDFromOpenIDConnectProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveClientIDFromOpenIDConnectProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveClientIDFromOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(RemoveClientIDFromOpenIDConnectProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
