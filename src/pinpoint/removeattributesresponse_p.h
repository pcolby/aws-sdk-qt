// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESRESPONSE_P_H
#define QTAWS_REMOVEATTRIBUTESRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class RemoveAttributesResponse;

class RemoveAttributesResponsePrivate : public PinpointResponsePrivate {

public:

    explicit RemoveAttributesResponsePrivate(RemoveAttributesResponse * const q);

    void parseRemoveAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAttributesResponse)
    Q_DISABLE_COPY(RemoveAttributesResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
