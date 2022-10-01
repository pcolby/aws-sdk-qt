// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGITEMRESPONSE_H
#define QTAWS_GETCATALOGITEMRESPONSE_H

#include "outpostsresponse.h"
#include "getcatalogitemrequest.h"

namespace QtAws {
namespace Outposts {

class GetCatalogItemResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetCatalogItemResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetCatalogItemResponse(const GetCatalogItemRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCatalogItemRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCatalogItemResponse)
    Q_DISABLE_COPY(GetCatalogItemResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
