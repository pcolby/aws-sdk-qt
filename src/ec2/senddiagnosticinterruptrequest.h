// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDIAGNOSTICINTERRUPTREQUEST_H
#define QTAWS_SENDDIAGNOSTICINTERRUPTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class SendDiagnosticInterruptRequestPrivate;

class QTAWSEC2_EXPORT SendDiagnosticInterruptRequest : public Ec2Request {

public:
    SendDiagnosticInterruptRequest(const SendDiagnosticInterruptRequest &other);
    SendDiagnosticInterruptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendDiagnosticInterruptRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
