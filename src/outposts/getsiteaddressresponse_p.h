// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITEADDRESSRESPONSE_P_H
#define QTAWS_GETSITEADDRESSRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetSiteAddressResponse;

class GetSiteAddressResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetSiteAddressResponsePrivate(GetSiteAddressResponse * const q);

    void parseGetSiteAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSiteAddressResponse)
    Q_DISABLE_COPY(GetSiteAddressResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
