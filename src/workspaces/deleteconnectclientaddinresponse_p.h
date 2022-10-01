// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTCLIENTADDINRESPONSE_P_H
#define QTAWS_DELETECONNECTCLIENTADDINRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectClientAddInResponse;

class DeleteConnectClientAddInResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DeleteConnectClientAddInResponsePrivate(DeleteConnectClientAddInResponse * const q);

    void parseDeleteConnectClientAddInResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectClientAddInResponse)
    Q_DISABLE_COPY(DeleteConnectClientAddInResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
