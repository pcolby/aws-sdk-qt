// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPENIDCONNECTPROVIDERRESPONSE_H
#define QTAWS_GETOPENIDCONNECTPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "getopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class GetOpenIDConnectProviderResponsePrivate;

class QTAWSIAM_EXPORT GetOpenIDConnectProviderResponse : public IamResponse {
    Q_OBJECT

public:
    GetOpenIDConnectProviderResponse(const GetOpenIDConnectProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOpenIDConnectProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(GetOpenIDConnectProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
