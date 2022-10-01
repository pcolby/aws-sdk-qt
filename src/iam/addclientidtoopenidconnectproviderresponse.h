// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERRESPONSE_H
#define QTAWS_ADDCLIENTIDTOOPENIDCONNECTPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "addclientidtoopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class AddClientIDToOpenIDConnectProviderResponsePrivate;

class QTAWSIAM_EXPORT AddClientIDToOpenIDConnectProviderResponse : public IamResponse {
    Q_OBJECT

public:
    AddClientIDToOpenIDConnectProviderResponse(const AddClientIDToOpenIDConnectProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddClientIDToOpenIDConnectProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddClientIDToOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(AddClientIDToOpenIDConnectProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
