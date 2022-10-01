// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWMODULERESPONSE_H
#define QTAWS_DELETECONTACTFLOWMODULERESPONSE_H

#include "connectresponse.h"
#include "deletecontactflowmodulerequest.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowModuleResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteContactFlowModuleResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteContactFlowModuleResponse(const DeleteContactFlowModuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactFlowModuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactFlowModuleResponse)
    Q_DISABLE_COPY(DeleteContactFlowModuleResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
