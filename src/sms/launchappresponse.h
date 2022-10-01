// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAUNCHAPPRESPONSE_H
#define QTAWS_LAUNCHAPPRESPONSE_H

#include "smsresponse.h"
#include "launchapprequest.h"

namespace QtAws {
namespace Sms {

class LaunchAppResponsePrivate;

class QTAWSSMS_EXPORT LaunchAppResponse : public SmsResponse {
    Q_OBJECT

public:
    LaunchAppResponse(const LaunchAppRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LaunchAppRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LaunchAppResponse)
    Q_DISABLE_COPY(LaunchAppResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
