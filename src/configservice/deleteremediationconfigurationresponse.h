// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEREMEDIATIONCONFIGURATIONRESPONSE_H

#include "configserviceresponse.h"
#include "deleteremediationconfigurationrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationConfigurationResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteRemediationConfigurationResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteRemediationConfigurationResponse(const DeleteRemediationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRemediationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRemediationConfigurationResponse)
    Q_DISABLE_COPY(DeleteRemediationConfigurationResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
