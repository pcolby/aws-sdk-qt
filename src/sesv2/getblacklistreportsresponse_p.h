// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLACKLISTREPORTSRESPONSE_P_H
#define QTAWS_GETBLACKLISTREPORTSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetBlacklistReportsResponse;

class GetBlacklistReportsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetBlacklistReportsResponsePrivate(GetBlacklistReportsResponse * const q);

    void parseGetBlacklistReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlacklistReportsResponse)
    Q_DISABLE_COPY(GetBlacklistReportsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
