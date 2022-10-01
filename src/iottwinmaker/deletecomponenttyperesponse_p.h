// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTTYPERESPONSE_P_H
#define QTAWS_DELETECOMPONENTTYPERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteComponentTypeResponse;

class DeleteComponentTypeResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit DeleteComponentTypeResponsePrivate(DeleteComponentTypeResponse * const q);

    void parseDeleteComponentTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteComponentTypeResponse)
    Q_DISABLE_COPY(DeleteComponentTypeResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
