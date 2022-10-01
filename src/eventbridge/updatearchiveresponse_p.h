// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVERESPONSE_P_H
#define QTAWS_UPDATEARCHIVERESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class UpdateArchiveResponse;

class UpdateArchiveResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit UpdateArchiveResponsePrivate(UpdateArchiveResponse * const q);

    void parseUpdateArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateArchiveResponse)
    Q_DISABLE_COPY(UpdateArchiveResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
