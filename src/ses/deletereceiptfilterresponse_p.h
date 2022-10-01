// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECEIPTFILTERRESPONSE_P_H
#define QTAWS_DELETERECEIPTFILTERRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteReceiptFilterResponse;

class DeleteReceiptFilterResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteReceiptFilterResponsePrivate(DeleteReceiptFilterResponse * const q);

    void parseDeleteReceiptFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReceiptFilterResponse)
    Q_DISABLE_COPY(DeleteReceiptFilterResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
