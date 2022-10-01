// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILESDKRELEASESRESPONSE_P_H
#define QTAWS_LISTMOBILESDKRELEASESRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class ListMobileSdkReleasesResponse;

class ListMobileSdkReleasesResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit ListMobileSdkReleasesResponsePrivate(ListMobileSdkReleasesResponse * const q);

    void parseListMobileSdkReleasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMobileSdkReleasesResponse)
    Q_DISABLE_COPY(ListMobileSdkReleasesResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
