// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITERESPONSE_P_H
#define QTAWS_UPDATESITERESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteResponse;

class UpdateSiteResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit UpdateSiteResponsePrivate(UpdateSiteResponse * const q);

    void parseUpdateSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSiteResponse)
    Q_DISABLE_COPY(UpdateSiteResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
