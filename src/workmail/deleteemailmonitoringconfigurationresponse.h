// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILMONITORINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEEMAILMONITORINGCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "deleteemailmonitoringconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteEmailMonitoringConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteEmailMonitoringConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteEmailMonitoringConfigurationResponse(const DeleteEmailMonitoringConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEmailMonitoringConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailMonitoringConfigurationResponse)
    Q_DISABLE_COPY(DeleteEmailMonitoringConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
