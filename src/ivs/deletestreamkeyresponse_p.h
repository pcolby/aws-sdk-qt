// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMKEYRESPONSE_P_H
#define QTAWS_DELETESTREAMKEYRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class DeleteStreamKeyResponse;

class DeleteStreamKeyResponsePrivate : public IvsResponsePrivate {

public:

    explicit DeleteStreamKeyResponsePrivate(DeleteStreamKeyResponse * const q);

    void parseDeleteStreamKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamKeyResponse)
    Q_DISABLE_COPY(DeleteStreamKeyResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
