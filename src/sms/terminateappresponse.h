// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEAPPRESPONSE_H
#define QTAWS_TERMINATEAPPRESPONSE_H

#include "smsresponse.h"
#include "terminateapprequest.h"

namespace QtAws {
namespace Sms {

class TerminateAppResponsePrivate;

class QTAWSSMS_EXPORT TerminateAppResponse : public SmsResponse {
    Q_OBJECT

public:
    TerminateAppResponse(const TerminateAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateAppResponse)
    Q_DISABLE_COPY(TerminateAppResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
