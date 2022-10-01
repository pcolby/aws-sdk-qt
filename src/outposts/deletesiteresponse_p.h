// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESITERESPONSE_P_H
#define QTAWS_DELETESITERESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class DeleteSiteResponse;

class DeleteSiteResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit DeleteSiteResponsePrivate(DeleteSiteResponse * const q);

    void parseDeleteSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSiteResponse)
    Q_DISABLE_COPY(DeleteSiteResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
