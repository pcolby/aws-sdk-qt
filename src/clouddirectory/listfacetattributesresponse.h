// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETATTRIBUTESRESPONSE_H
#define QTAWS_LISTFACETATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listfacetattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListFacetAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListFacetAttributesResponse(const ListFacetAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFacetAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFacetAttributesResponse)
    Q_DISABLE_COPY(ListFacetAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
