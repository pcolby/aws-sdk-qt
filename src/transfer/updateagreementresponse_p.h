// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGREEMENTRESPONSE_P_H
#define QTAWS_UPDATEAGREEMENTRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class UpdateAgreementResponse;

class UpdateAgreementResponsePrivate : public TransferResponsePrivate {

public:

    explicit UpdateAgreementResponsePrivate(UpdateAgreementResponse * const q);

    void parseUpdateAgreementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAgreementResponse)
    Q_DISABLE_COPY(UpdateAgreementResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
