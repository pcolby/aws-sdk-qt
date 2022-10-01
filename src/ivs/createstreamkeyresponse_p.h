// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMKEYRESPONSE_P_H
#define QTAWS_CREATESTREAMKEYRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class CreateStreamKeyResponse;

class CreateStreamKeyResponsePrivate : public IvsResponsePrivate {

public:

    explicit CreateStreamKeyResponsePrivate(CreateStreamKeyResponse * const q);

    void parseCreateStreamKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamKeyResponse)
    Q_DISABLE_COPY(CreateStreamKeyResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
