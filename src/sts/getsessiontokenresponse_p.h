// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONTOKENRESPONSE_P_H
#define QTAWS_GETSESSIONTOKENRESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class GetSessionTokenResponse;

class GetSessionTokenResponsePrivate : public StsResponsePrivate {

public:

    explicit GetSessionTokenResponsePrivate(GetSessionTokenResponse * const q);

    void parseGetSessionTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSessionTokenResponse)
    Q_DISABLE_COPY(GetSessionTokenResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
