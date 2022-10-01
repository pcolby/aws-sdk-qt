// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGREEMENTRESPONSE_P_H
#define QTAWS_CREATEAGREEMENTRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class CreateAgreementResponse;

class CreateAgreementResponsePrivate : public TransferResponsePrivate {

public:

    explicit CreateAgreementResponsePrivate(CreateAgreementResponse * const q);

    void parseCreateAgreementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAgreementResponse)
    Q_DISABLE_COPY(CreateAgreementResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
