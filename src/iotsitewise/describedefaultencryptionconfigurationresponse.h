// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describedefaultencryptionconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDefaultEncryptionConfigurationResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeDefaultEncryptionConfigurationResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeDefaultEncryptionConfigurationResponse(const DescribeDefaultEncryptionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDefaultEncryptionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDefaultEncryptionConfigurationResponse)
    Q_DISABLE_COPY(DescribeDefaultEncryptionConfigurationResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
