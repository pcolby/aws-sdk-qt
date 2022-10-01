// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETADATARESPONSE_P_H
#define QTAWS_UPDATEFLEETMETADATARESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class UpdateFleetMetadataResponse;

class UpdateFleetMetadataResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit UpdateFleetMetadataResponsePrivate(UpdateFleetMetadataResponse * const q);

    void parseUpdateFleetMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFleetMetadataResponse)
    Q_DISABLE_COPY(UpdateFleetMetadataResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
