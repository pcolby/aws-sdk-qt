// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITYRESPONSE_P_H
#define QTAWS_UPDATEENTITYRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateEntityResponse;

class UpdateEntityResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit UpdateEntityResponsePrivate(UpdateEntityResponse * const q);

    void parseUpdateEntityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEntityResponse)
    Q_DISABLE_COPY(UpdateEntityResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
