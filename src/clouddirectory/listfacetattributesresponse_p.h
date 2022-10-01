// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETATTRIBUTESRESPONSE_P_H
#define QTAWS_LISTFACETATTRIBUTESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetAttributesResponse;

class ListFacetAttributesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListFacetAttributesResponsePrivate(ListFacetAttributesResponse * const q);

    void parseListFacetAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFacetAttributesResponse)
    Q_DISABLE_COPY(ListFacetAttributesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
