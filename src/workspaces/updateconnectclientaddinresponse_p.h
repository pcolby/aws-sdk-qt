// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTCLIENTADDINRESPONSE_P_H
#define QTAWS_UPDATECONNECTCLIENTADDINRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateConnectClientAddInResponse;

class UpdateConnectClientAddInResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit UpdateConnectClientAddInResponsePrivate(UpdateConnectClientAddInResponse * const q);

    void parseUpdateConnectClientAddInResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectClientAddInResponse)
    Q_DISABLE_COPY(UpdateConnectClientAddInResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
