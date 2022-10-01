// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_H
#define QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWRESPONSE_H

#include "connectresponse.h"
#include "associatephonenumbercontactflowrequest.h"

namespace QtAws {
namespace Connect {

class AssociatePhoneNumberContactFlowResponsePrivate;

class QTAWSCONNECT_EXPORT AssociatePhoneNumberContactFlowResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociatePhoneNumberContactFlowResponse(const AssociatePhoneNumberContactFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePhoneNumberContactFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumberContactFlowResponse)
    Q_DISABLE_COPY(AssociatePhoneNumberContactFlowResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
