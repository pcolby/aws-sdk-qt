// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconfigurationrecorderstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecorderStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationRecorderStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConfigurationRecorderStatusResponse(const DescribeConfigurationRecorderStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationRecorderStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRecorderStatusResponse)
    Q_DISABLE_COPY(DescribeConfigurationRecorderStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
