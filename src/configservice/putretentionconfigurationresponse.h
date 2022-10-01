// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTRETENTIONCONFIGURATIONRESPONSE_H

#include "configserviceresponse.h"
#include "putretentionconfigurationrequest.h"

namespace QtAws {
namespace ConfigService {

class PutRetentionConfigurationResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRetentionConfigurationResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutRetentionConfigurationResponse(const PutRetentionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRetentionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRetentionConfigurationResponse)
    Q_DISABLE_COPY(PutRetentionConfigurationResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
