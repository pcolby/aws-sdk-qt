// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAPRESPONSE_P_H
#define QTAWS_CREATEMAPRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CreateMapResponse;

class CreateMapResponsePrivate : public LocationResponsePrivate {

public:

    explicit CreateMapResponsePrivate(CreateMapResponse * const q);

    void parseCreateMapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMapResponse)
    Q_DISABLE_COPY(CreateMapResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
