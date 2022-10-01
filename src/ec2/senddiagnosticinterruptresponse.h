// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDIAGNOSTICINTERRUPTRESPONSE_H
#define QTAWS_SENDDIAGNOSTICINTERRUPTRESPONSE_H

#include "ec2response.h"
#include "senddiagnosticinterruptrequest.h"

namespace QtAws {
namespace Ec2 {

class SendDiagnosticInterruptResponsePrivate;

class QTAWSEC2_EXPORT SendDiagnosticInterruptResponse : public Ec2Response {
    Q_OBJECT

public:
    SendDiagnosticInterruptResponse(const SendDiagnosticInterruptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendDiagnosticInterruptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendDiagnosticInterruptResponse)
    Q_DISABLE_COPY(SendDiagnosticInterruptResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
