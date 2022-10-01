// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAMLPROVIDERTAGSRESPONSE_H
#define QTAWS_LISTSAMLPROVIDERTAGSRESPONSE_H

#include "iamresponse.h"
#include "listsamlprovidertagsrequest.h"

namespace QtAws {
namespace Iam {

class ListSAMLProviderTagsResponsePrivate;

class QTAWSIAM_EXPORT ListSAMLProviderTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListSAMLProviderTagsResponse(const ListSAMLProviderTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSAMLProviderTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSAMLProviderTagsResponse)
    Q_DISABLE_COPY(ListSAMLProviderTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
