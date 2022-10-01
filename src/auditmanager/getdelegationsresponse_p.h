// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATIONSRESPONSE_P_H
#define QTAWS_GETDELEGATIONSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class GetDelegationsResponse;

class GetDelegationsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit GetDelegationsResponsePrivate(GetDelegationsResponse * const q);

    void parseGetDelegationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDelegationsResponse)
    Q_DISABLE_COPY(GetDelegationsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
