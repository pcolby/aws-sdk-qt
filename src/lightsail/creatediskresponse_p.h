// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISKRESPONSE_P_H
#define QTAWS_CREATEDISKRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateDiskResponse;

class CreateDiskResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateDiskResponsePrivate(CreateDiskResponse * const q);

    void parseCreateDiskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDiskResponse)
    Q_DISABLE_COPY(CreateDiskResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
