// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPEDLINKFACETRESPONSE_P_H
#define QTAWS_UPDATETYPEDLINKFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateTypedLinkFacetResponse;

class UpdateTypedLinkFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit UpdateTypedLinkFacetResponsePrivate(UpdateTypedLinkFacetResponse * const q);

    void parseUpdateTypedLinkFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTypedLinkFacetResponse)
    Q_DISABLE_COPY(UpdateTypedLinkFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
