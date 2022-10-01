// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETNAMESRESPONSE_P_H
#define QTAWS_LISTTYPEDLINKFACETNAMESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetNamesResponse;

class ListTypedLinkFacetNamesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListTypedLinkFacetNamesResponsePrivate(ListTypedLinkFacetNamesResponse * const q);

    void parseListTypedLinkFacetNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTypedLinkFacetNamesResponse)
    Q_DISABLE_COPY(ListTypedLinkFacetNamesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
