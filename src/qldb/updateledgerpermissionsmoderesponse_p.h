// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELEDGERPERMISSIONSMODERESPONSE_P_H
#define QTAWS_UPDATELEDGERPERMISSIONSMODERESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class UpdateLedgerPermissionsModeResponse;

class UpdateLedgerPermissionsModeResponsePrivate : public QldbResponsePrivate {

public:

    explicit UpdateLedgerPermissionsModeResponsePrivate(UpdateLedgerPermissionsModeResponse * const q);

    void parseUpdateLedgerPermissionsModeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLedgerPermissionsModeResponse)
    Q_DISABLE_COPY(UpdateLedgerPermissionsModeResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
