// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONRESPONSE_P_H
#define QTAWS_PUTPERMISSIONRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class PutPermissionResponse;

class PutPermissionResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit PutPermissionResponsePrivate(PutPermissionResponse * const q);

    void parsePutPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPermissionResponse)
    Q_DISABLE_COPY(PutPermissionResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
