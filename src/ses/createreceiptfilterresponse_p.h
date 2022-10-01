// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTFILTERRESPONSE_P_H
#define QTAWS_CREATERECEIPTFILTERRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateReceiptFilterResponse;

class CreateReceiptFilterResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateReceiptFilterResponsePrivate(CreateReceiptFilterResponse * const q);

    void parseCreateReceiptFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReceiptFilterResponse)
    Q_DISABLE_COPY(CreateReceiptFilterResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
