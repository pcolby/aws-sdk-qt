// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKATTRIBUTESRESPONSE_P_H
#define QTAWS_GETLINKATTRIBUTESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetLinkAttributesResponse;

class GetLinkAttributesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetLinkAttributesResponsePrivate(GetLinkAttributesResponse * const q);

    void parseGetLinkAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLinkAttributesResponse)
    Q_DISABLE_COPY(GetLinkAttributesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
