// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGREEMENTRESPONSE_P_H
#define QTAWS_DELETEAGREEMENTRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteAgreementResponse;

class DeleteAgreementResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteAgreementResponsePrivate(DeleteAgreementResponse * const q);

    void parseDeleteAgreementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAgreementResponse)
    Q_DISABLE_COPY(DeleteAgreementResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
