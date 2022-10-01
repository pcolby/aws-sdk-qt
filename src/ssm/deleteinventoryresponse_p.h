// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVENTORYRESPONSE_P_H
#define QTAWS_DELETEINVENTORYRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteInventoryResponse;

class DeleteInventoryResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteInventoryResponsePrivate(DeleteInventoryResponse * const q);

    void parseDeleteInventoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInventoryResponse)
    Q_DISABLE_COPY(DeleteInventoryResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
