// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECODEAUTHORIZATIONMESSAGERESPONSE_P_H
#define QTAWS_DECODEAUTHORIZATIONMESSAGERESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class DecodeAuthorizationMessageResponse;

class DecodeAuthorizationMessageResponsePrivate : public StsResponsePrivate {

public:

    explicit DecodeAuthorizationMessageResponsePrivate(DecodeAuthorizationMessageResponse * const q);

    void parseDecodeAuthorizationMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DecodeAuthorizationMessageResponse)
    Q_DISABLE_COPY(DecodeAuthorizationMessageResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
