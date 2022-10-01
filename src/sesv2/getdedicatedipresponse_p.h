// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPRESPONSE_P_H
#define QTAWS_GETDEDICATEDIPRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetDedicatedIpResponse;

class GetDedicatedIpResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetDedicatedIpResponsePrivate(GetDedicatedIpResponse * const q);

    void parseGetDedicatedIpResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDedicatedIpResponse)
    Q_DISABLE_COPY(GetDedicatedIpResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
