// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETAPPREPLICATIONCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "getappreplicationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class GetAppReplicationConfigurationResponsePrivate;

class QTAWSSMS_EXPORT GetAppReplicationConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    GetAppReplicationConfigurationResponse(const GetAppReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppReplicationConfigurationResponse)
    Q_DISABLE_COPY(GetAppReplicationConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
