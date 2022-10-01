// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSRESPONSE_P_H
#define QTAWS_GETBUCKETSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetBucketsResponse;

class GetBucketsResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetBucketsResponsePrivate(GetBucketsResponse * const q);

    void parseGetBucketsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketsResponse)
    Q_DISABLE_COPY(GetBucketsResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
