// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETNAMESRESPONSE_H
#define QTAWS_LISTTYPEDLINKFACETNAMESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listtypedlinkfacetnamesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetNamesResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListTypedLinkFacetNamesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    ListTypedLinkFacetNamesResponse(const ListTypedLinkFacetNamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTypedLinkFacetNamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypedLinkFacetNamesResponse)
    Q_DISABLE_COPY(ListTypedLinkFacetNamesResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
