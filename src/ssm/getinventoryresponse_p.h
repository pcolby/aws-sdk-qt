// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYRESPONSE_P_H
#define QTAWS_GETINVENTORYRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetInventoryResponse;

class GetInventoryResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetInventoryResponsePrivate(GetInventoryResponse * const q);

    void parseGetInventoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInventoryResponse)
    Q_DISABLE_COPY(GetInventoryResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
