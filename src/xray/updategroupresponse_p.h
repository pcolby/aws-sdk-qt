// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPRESPONSE_P_H
#define QTAWS_UPDATEGROUPRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class UpdateGroupResponse;

class UpdateGroupResponsePrivate : public XRayResponsePrivate {

public:

    explicit UpdateGroupResponsePrivate(UpdateGroupResponse * const q);

    void parseUpdateGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGroupResponse)
    Q_DISABLE_COPY(UpdateGroupResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
