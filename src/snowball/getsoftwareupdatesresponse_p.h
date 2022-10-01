// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOFTWAREUPDATESRESPONSE_P_H
#define QTAWS_GETSOFTWAREUPDATESRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class GetSoftwareUpdatesResponse;

class GetSoftwareUpdatesResponsePrivate : public SnowballResponsePrivate {

public:

    explicit GetSoftwareUpdatesResponsePrivate(GetSoftwareUpdatesResponse * const q);

    void parseGetSoftwareUpdatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSoftwareUpdatesResponse)
    Q_DISABLE_COPY(GetSoftwareUpdatesResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
