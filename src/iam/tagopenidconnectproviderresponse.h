// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGOPENIDCONNECTPROVIDERRESPONSE_H
#define QTAWS_TAGOPENIDCONNECTPROVIDERRESPONSE_H

#include "iamresponse.h"
#include "tagopenidconnectproviderrequest.h"

namespace QtAws {
namespace Iam {

class TagOpenIDConnectProviderResponsePrivate;

class QTAWSIAM_EXPORT TagOpenIDConnectProviderResponse : public IamResponse {
    Q_OBJECT

public:
    TagOpenIDConnectProviderResponse(const TagOpenIDConnectProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagOpenIDConnectProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagOpenIDConnectProviderResponse)
    Q_DISABLE_COPY(TagOpenIDConnectProviderResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
