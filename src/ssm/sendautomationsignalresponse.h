// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAUTOMATIONSIGNALRESPONSE_H
#define QTAWS_SENDAUTOMATIONSIGNALRESPONSE_H

#include "ssmresponse.h"
#include "sendautomationsignalrequest.h"

namespace QtAws {
namespace Ssm {

class SendAutomationSignalResponsePrivate;

class QTAWSSSM_EXPORT SendAutomationSignalResponse : public SsmResponse {
    Q_OBJECT

public:
    SendAutomationSignalResponse(const SendAutomationSignalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendAutomationSignalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendAutomationSignalResponse)
    Q_DISABLE_COPY(SendAutomationSignalResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
