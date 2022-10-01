// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPENIDCONNECTPROVIDERRESPONSE_H
#define QTAWS_CREATEOPENIDCONNECTPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "createopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class CreateOpenIDConnectProviderResponsePrivate;

class QTAWSIAM_EXPORT CreateOpenIDConnectProviderResponse : public IamResponse {
    Q_OBJECT

public:
    CreateOpenIDConnectProviderResponse(const CreateOpenIDConnectProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOpenIDConnectProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(CreateOpenIDConnectProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
