// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGOPENIDCONNECTPROVIDERRESPONSE_H
#define QTAWS_UNTAGOPENIDCONNECTPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "untagopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class UntagOpenIDConnectProviderResponsePrivate;

class QTAWSIAM_EXPORT UntagOpenIDConnectProviderResponse : public IamResponse {
    Q_OBJECT

public:
    UntagOpenIDConnectProviderResponse(const UntagOpenIDConnectProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagOpenIDConnectProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(UntagOpenIDConnectProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
