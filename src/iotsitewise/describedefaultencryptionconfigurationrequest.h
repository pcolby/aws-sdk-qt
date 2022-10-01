// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDefaultEncryptionConfigurationRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeDefaultEncryptionConfigurationRequest : public IoTSiteWiseRequest {

public:
    DescribeDefaultEncryptionConfigurationRequest(const DescribeDefaultEncryptionConfigurationRequest &other);
    DescribeDefaultEncryptionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDefaultEncryptionConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
