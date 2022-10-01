// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTFLOWRESPONSE_H
#define QTAWS_DELETECONTACTFLOWRESPONSE_H

#include "connectresponse.h"
#include "deletecontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DeleteContactFlowResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteContactFlowResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteContactFlowResponse(const DeleteContactFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactFlowResponse)
    Q_DISABLE_COPY(DeleteContactFlowResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
