// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTORREQUEST_H
#define QTAWS_DISASSOCIATECONNECTORREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class DisassociateConnectorRequestPrivate;

class QTAWSSMS_EXPORT DisassociateConnectorRequest : public SmsRequest {

public:
    DisassociateConnectorRequest(const DisassociateConnectorRequest &other);
    DisassociateConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectorRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
