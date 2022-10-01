// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINACCESSCONTROLSRESPONSE_P_H
#define QTAWS_LISTORIGINACCESSCONTROLSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListOriginAccessControlsResponse;

class ListOriginAccessControlsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListOriginAccessControlsResponsePrivate(ListOriginAccessControlsResponse * const q);

    void parseListOriginAccessControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOriginAccessControlsResponse)
    Q_DISABLE_COPY(ListOriginAccessControlsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
