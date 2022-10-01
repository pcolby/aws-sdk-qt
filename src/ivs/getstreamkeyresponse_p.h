// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMKEYRESPONSE_P_H
#define QTAWS_GETSTREAMKEYRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class GetStreamKeyResponse;

class GetStreamKeyResponsePrivate : public IvsResponsePrivate {

public:

    explicit GetStreamKeyResponsePrivate(GetStreamKeyResponse * const q);

    void parseGetStreamKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamKeyResponse)
    Q_DISABLE_COPY(GetStreamKeyResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
