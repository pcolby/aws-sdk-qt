// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTFLOWMODULERESPONSE_H
#define QTAWS_CREATECONTACTFLOWMODULERESPONSE_H

#include "connectresponse.h"
#include "createcontactflowmodulerequest.h"

namespace QtAws {
namespace Connect {

class CreateContactFlowModuleResponsePrivate;

class QTAWSCONNECT_EXPORT CreateContactFlowModuleResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateContactFlowModuleResponse(const CreateContactFlowModuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactFlowModuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactFlowModuleResponse)
    Q_DISABLE_COPY(CreateContactFlowModuleResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
