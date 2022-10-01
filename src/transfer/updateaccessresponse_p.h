// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSRESPONSE_P_H
#define QTAWS_UPDATEACCESSRESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class UpdateAccessResponse;

class UpdateAccessResponsePrivate : public TransferResponsePrivate {

public:

    explicit UpdateAccessResponsePrivate(UpdateAccessResponse * const q);

    void parseUpdateAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccessResponse)
    Q_DISABLE_COPY(UpdateAccessResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
