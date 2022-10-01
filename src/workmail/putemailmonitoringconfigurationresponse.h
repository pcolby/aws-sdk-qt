// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILMONITORINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTEMAILMONITORINGCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "putemailmonitoringconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class PutEmailMonitoringConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT PutEmailMonitoringConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    PutEmailMonitoringConfigurationResponse(const PutEmailMonitoringConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEmailMonitoringConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEmailMonitoringConfigurationResponse)
    Q_DISABLE_COPY(PutEmailMonitoringConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
