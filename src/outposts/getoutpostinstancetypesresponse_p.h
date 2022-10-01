// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTINSTANCETYPESRESPONSE_P_H
#define QTAWS_GETOUTPOSTINSTANCETYPESRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetOutpostInstanceTypesResponse;

class GetOutpostInstanceTypesResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetOutpostInstanceTypesResponsePrivate(GetOutpostInstanceTypesResponse * const q);

    void parseGetOutpostInstanceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOutpostInstanceTypesResponse)
    Q_DISABLE_COPY(GetOutpostInstanceTypesResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
