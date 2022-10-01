// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTFLOWMODULESRESPONSE_H
#define QTAWS_LISTCONTACTFLOWMODULESRESPONSE_H

#include "connectresponse.h"
#include "listcontactflowmodulesrequest.h"

namespace QtAws {
namespace Connect {

class ListContactFlowModulesResponsePrivate;

class QTAWSCONNECT_EXPORT ListContactFlowModulesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListContactFlowModulesResponse(const ListContactFlowModulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactFlowModulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactFlowModulesResponse)
    Q_DISABLE_COPY(ListContactFlowModulesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
