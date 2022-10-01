// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSTATUSRESPONSE_P_H
#define QTAWS_GETCONNECTIONSTATUSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetConnectionStatusResponse;

class GetConnectionStatusResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetConnectionStatusResponsePrivate(GetConnectionStatusResponse * const q);

    void parseGetConnectionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectionStatusResponse)
    Q_DISABLE_COPY(GetConnectionStatusResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
