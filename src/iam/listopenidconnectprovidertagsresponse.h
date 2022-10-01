// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPENIDCONNECTPROVIDERTAGSRESPONSE_H
#define QTAWS_LISTOPENIDCONNECTPROVIDERTAGSRESPONSE_H

#include "iamresponse.h"
#include "listopenidconnectprovidertagsrequest.h"

namespace QtAws {
namespace Iam {

class ListOpenIDConnectProviderTagsResponsePrivate;

class QTAWSIAM_EXPORT ListOpenIDConnectProviderTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListOpenIDConnectProviderTagsResponse(const ListOpenIDConnectProviderTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOpenIDConnectProviderTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpenIDConnectProviderTagsResponse)
    Q_DISABLE_COPY(ListOpenIDConnectProviderTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
