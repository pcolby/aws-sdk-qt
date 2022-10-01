// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMRESPONSE_P_H
#define QTAWS_GETSTREAMRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class GetStreamResponse;

class GetStreamResponsePrivate : public IvsResponsePrivate {

public:

    explicit GetStreamResponsePrivate(GetStreamResponse * const q);

    void parseGetStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamResponse)
    Q_DISABLE_COPY(GetStreamResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
