// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHARESRESPONSE_P_H
#define QTAWS_GETRESOURCESHARESRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class GetResourceSharesResponse;

class GetResourceSharesResponsePrivate : public RamResponsePrivate {

public:

    explicit GetResourceSharesResponsePrivate(GetResourceSharesResponse * const q);

    void parseGetResourceSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceSharesResponse)
    Q_DISABLE_COPY(GetResourceSharesResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
