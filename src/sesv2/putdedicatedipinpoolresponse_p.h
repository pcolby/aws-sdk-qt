// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPINPOOLRESPONSE_P_H
#define QTAWS_PUTDEDICATEDIPINPOOLRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpInPoolResponse;

class PutDedicatedIpInPoolResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutDedicatedIpInPoolResponsePrivate(PutDedicatedIpInPoolResponse * const q);

    void parsePutDedicatedIpInPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDedicatedIpInPoolResponse)
    Q_DISABLE_COPY(PutDedicatedIpInPoolResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
