// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTYPEDLINKFACETINFORMATIONRESPONSE_P_H
#define QTAWS_GETTYPEDLINKFACETINFORMATIONRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetTypedLinkFacetInformationResponse;

class GetTypedLinkFacetInformationResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetTypedLinkFacetInformationResponsePrivate(GetTypedLinkFacetInformationResponse * const q);

    void parseGetTypedLinkFacetInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTypedLinkFacetInformationResponse)
    Q_DISABLE_COPY(GetTypedLinkFacetInformationResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
