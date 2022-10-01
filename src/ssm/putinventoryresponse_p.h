// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVENTORYRESPONSE_P_H
#define QTAWS_PUTINVENTORYRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class PutInventoryResponse;

class PutInventoryResponsePrivate : public SsmResponsePrivate {

public:

    explicit PutInventoryResponsePrivate(PutInventoryResponse * const q);

    void parsePutInventoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInventoryResponse)
    Q_DISABLE_COPY(PutInventoryResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
