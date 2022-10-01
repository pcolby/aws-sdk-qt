// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPEDLINKFACETRESPONSE_P_H
#define QTAWS_CREATETYPEDLINKFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class CreateTypedLinkFacetResponse;

class CreateTypedLinkFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit CreateTypedLinkFacetResponsePrivate(CreateTypedLinkFacetResponse * const q);

    void parseCreateTypedLinkFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTypedLinkFacetResponse)
    Q_DISABLE_COPY(CreateTypedLinkFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
