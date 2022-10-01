// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTCLIENTADDINRESPONSE_P_H
#define QTAWS_CREATECONNECTCLIENTADDINRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectClientAddInResponse;

class CreateConnectClientAddInResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateConnectClientAddInResponsePrivate(CreateConnectClientAddInResponse * const q);

    void parseCreateConnectClientAddInResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectClientAddInResponse)
    Q_DISABLE_COPY(CreateConnectClientAddInResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
