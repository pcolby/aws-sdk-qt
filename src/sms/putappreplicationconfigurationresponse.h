// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTAPPREPLICATIONCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "putappreplicationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class PutAppReplicationConfigurationResponsePrivate;

class QTAWSSMS_EXPORT PutAppReplicationConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    PutAppReplicationConfigurationResponse(const PutAppReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppReplicationConfigurationResponse)
    Q_DISABLE_COPY(PutAppReplicationConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
