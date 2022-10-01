// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSRESPONSE_P_H
#define QTAWS_CREATEACCESSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class CreateAccessResponse;

class CreateAccessResponsePrivate : public TransferResponsePrivate {

public:

    explicit CreateAccessResponsePrivate(CreateAccessResponse * const q);

    void parseCreateAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessResponse)
    Q_DISABLE_COPY(CreateAccessResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
