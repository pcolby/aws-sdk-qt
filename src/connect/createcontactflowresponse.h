// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTFLOWRESPONSE_H
#define QTAWS_CREATECONTACTFLOWRESPONSE_H

#include "connectresponse.h"
#include "createcontactflowrequest.h"

namespace QtAws {
namespace Connect {

class CreateContactFlowResponsePrivate;

class QTAWSCONNECT_EXPORT CreateContactFlowResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateContactFlowResponse(const CreateContactFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactFlowResponse)
    Q_DISABLE_COPY(CreateContactFlowResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
