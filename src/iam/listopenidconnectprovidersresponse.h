// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERSRESPONSE_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERSRESPONSE_H

#include "iamresponse.h"
#include "listopenidconnectprovidersrequest.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProvidersResponsePrivate;

class QTAWSIAM_EXPORT ListOpenIDConnectProvidersResponse : public IamResponse {
    Q_OBJECT

public:
    ListOpenIDConnectProvidersResponse(const ListOpenIDConnectProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOpenIDConnectProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpenIDConnectProvidersResponse)
    Q_DISABLE_COPY(ListOpenIDConnectProvidersResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
