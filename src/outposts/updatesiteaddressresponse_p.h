// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEADDRESSRESPONSE_P_H
#define QTAWS_UPDATESITEADDRESSRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteAddressResponse;

class UpdateSiteAddressResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit UpdateSiteAddressResponsePrivate(UpdateSiteAddressResponse * const q);

    void parseUpdateSiteAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSiteAddressResponse)
    Q_DISABLE_COPY(UpdateSiteAddressResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
