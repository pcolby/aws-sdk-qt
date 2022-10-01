// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREPLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAPPREPLICATIONCONFIGURATIONRESPONSE_H

#include "smsresponse.h"
#include "deleteappreplicationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppReplicationConfigurationResponsePrivate;

class QTAWSSMS_EXPORT DeleteAppReplicationConfigurationResponse : public SmsResponse {
    Q_OBJECT

public:
    DeleteAppReplicationConfigurationResponse(const DeleteAppReplicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppReplicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppReplicationConfigurationResponse)
    Q_DISABLE_COPY(DeleteAppReplicationConfigurationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
