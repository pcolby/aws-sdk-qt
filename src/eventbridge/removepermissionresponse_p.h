// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPERMISSIONRESPONSE_P_H
#define QTAWS_REMOVEPERMISSIONRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class RemovePermissionResponse;

class RemovePermissionResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit RemovePermissionResponsePrivate(RemovePermissionResponse * const q);

    void parseRemovePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemovePermissionResponse)
    Q_DISABLE_COPY(RemovePermissionResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
