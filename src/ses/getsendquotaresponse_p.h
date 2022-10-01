// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDQUOTARESPONSE_P_H
#define QTAWS_GETSENDQUOTARESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetSendQuotaResponse;

class GetSendQuotaResponsePrivate : public SesResponsePrivate {

public:

    explicit GetSendQuotaResponsePrivate(GetSendQuotaResponse * const q);

    void parseGetSendQuotaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSendQuotaResponse)
    Q_DISABLE_COPY(GetSendQuotaResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
