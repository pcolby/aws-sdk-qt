// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAPRESPONSE_P_H
#define QTAWS_UPDATEMAPRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class UpdateMapResponse;

class UpdateMapResponsePrivate : public LocationResponsePrivate {

public:

    explicit UpdateMapResponsePrivate(UpdateMapResponse * const q);

    void parseUpdateMapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMapResponse)
    Q_DISABLE_COPY(UpdateMapResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
