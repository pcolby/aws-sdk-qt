// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITERESPONSE_P_H
#define QTAWS_GETSITERESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetSiteResponse;

class GetSiteResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetSiteResponsePrivate(GetSiteResponse * const q);

    void parseGetSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSiteResponse)
    Q_DISABLE_COPY(GetSiteResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
