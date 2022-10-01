// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSSANDBOXACCOUNTSTATUSRESPONSE_P_H
#define QTAWS_GETSMSSANDBOXACCOUNTSTATUSRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetSMSSandboxAccountStatusResponse;

class GetSMSSandboxAccountStatusResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetSMSSandboxAccountStatusResponsePrivate(GetSMSSandboxAccountStatusResponse * const q);

    void parseGetSMSSandboxAccountStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSMSSandboxAccountStatusResponse)
    Q_DISABLE_COPY(GetSMSSandboxAccountStatusResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
