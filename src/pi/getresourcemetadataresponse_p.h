// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETADATARESPONSE_P_H
#define QTAWS_GETRESOURCEMETADATARESPONSE_P_H

#include "piresponse_p.h"

namespace QtAws {
namespace Pi {

class GetResourceMetadataResponse;

class GetResourceMetadataResponsePrivate : public PiResponsePrivate {

public:

    explicit GetResourceMetadataResponsePrivate(GetResourceMetadataResponse * const q);

    void parseGetResourceMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceMetadataResponse)
    Q_DISABLE_COPY(GetResourceMetadataResponsePrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
