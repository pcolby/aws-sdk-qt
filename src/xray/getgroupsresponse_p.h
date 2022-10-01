// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSRESPONSE_P_H
#define QTAWS_GETGROUPSRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetGroupsResponse;

class GetGroupsResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetGroupsResponsePrivate(GetGroupsResponse * const q);

    void parseGetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupsResponse)
    Q_DISABLE_COPY(GetGroupsResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
