// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCERESPONSE_P_H
#define QTAWS_DELETEINSTANCERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceResponse;

class DeleteInstanceResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteInstanceResponsePrivate(DeleteInstanceResponse * const q);

    void parseDeleteInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceResponse)
    Q_DISABLE_COPY(DeleteInstanceResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
