// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYRESPONSE_P_H
#define QTAWS_CREATEENTITYRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateEntityResponse;

class CreateEntityResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit CreateEntityResponsePrivate(CreateEntityResponse * const q);

    void parseCreateEntityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEntityResponse)
    Q_DISABLE_COPY(CreateEntityResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
