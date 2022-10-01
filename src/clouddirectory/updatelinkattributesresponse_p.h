// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATELINKATTRIBUTESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateLinkAttributesResponse;

class UpdateLinkAttributesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit UpdateLinkAttributesResponsePrivate(UpdateLinkAttributesResponse * const q);

    void parseUpdateLinkAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLinkAttributesResponse)
    Q_DISABLE_COPY(UpdateLinkAttributesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
