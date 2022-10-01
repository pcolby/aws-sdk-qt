// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTORRESPONSE_H
#define QTAWS_DISASSOCIATECONNECTORRESPONSE_H

#include "smsresponse.h"
#include "disassociateconnectorrequest.h"

namespace QtAws {
namespace Sms {

class DisassociateConnectorResponsePrivate;

class QTAWSSMS_EXPORT DisassociateConnectorResponse : public SmsResponse {
    Q_OBJECT

public:
    DisassociateConnectorResponse(const DisassociateConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectorResponse)
    Q_DISABLE_COPY(DisassociateConnectorResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
