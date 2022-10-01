// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPRESSEDDESTINATIONRESPONSE_P_H
#define QTAWS_GETSUPPRESSEDDESTINATIONRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetSuppressedDestinationResponse;

class GetSuppressedDestinationResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetSuppressedDestinationResponsePrivate(GetSuppressedDestinationResponse * const q);

    void parseGetSuppressedDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSuppressedDestinationResponse)
    Q_DISABLE_COPY(GetSuppressedDestinationResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
