// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETATTRIBUTESRESPONSE_H
#define QTAWS_LISTTYPEDLINKFACETATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listtypedlinkfacetattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetAttributesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListTypedLinkFacetAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListTypedLinkFacetAttributesResponse(const ListTypedLinkFacetAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTypedLinkFacetAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypedLinkFacetAttributesResponse)
    Q_DISABLE_COPY(ListTypedLinkFacetAttributesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
