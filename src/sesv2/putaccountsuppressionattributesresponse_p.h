// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTACCOUNTSUPPRESSIONATTRIBUTESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutAccountSuppressionAttributesResponse;

class PutAccountSuppressionAttributesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutAccountSuppressionAttributesResponsePrivate(PutAccountSuppressionAttributesResponse * const q);

    void parsePutAccountSuppressionAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountSuppressionAttributesResponse)
    Q_DISABLE_COPY(PutAccountSuppressionAttributesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
