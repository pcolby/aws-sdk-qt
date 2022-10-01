// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYRESPONSE_P_H
#define QTAWS_DELETEENTITYRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteEntityResponse;

class DeleteEntityResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit DeleteEntityResponsePrivate(DeleteEntityResponse * const q);

    void parseDeleteEntityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEntityResponse)
    Q_DISABLE_COPY(DeleteEntityResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
