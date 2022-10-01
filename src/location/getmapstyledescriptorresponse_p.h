// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSTYLEDESCRIPTORRESPONSE_P_H
#define QTAWS_GETMAPSTYLEDESCRIPTORRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetMapStyleDescriptorResponse;

class GetMapStyleDescriptorResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetMapStyleDescriptorResponsePrivate(GetMapStyleDescriptorResponse * const q);

    void parseGetMapStyleDescriptorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMapStyleDescriptorResponse)
    Q_DISABLE_COPY(GetMapStyleDescriptorResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
