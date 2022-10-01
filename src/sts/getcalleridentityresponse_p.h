// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLERIDENTITYRESPONSE_P_H
#define QTAWS_GETCALLERIDENTITYRESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class GetCallerIdentityResponse;

class GetCallerIdentityResponsePrivate : public StsResponsePrivate {

public:

    explicit GetCallerIdentityResponsePrivate(GetCallerIdentityResponse * const q);

    void parseGetCallerIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCallerIdentityResponse)
    Q_DISABLE_COPY(GetCallerIdentityResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
