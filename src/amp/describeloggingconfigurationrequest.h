// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBELOGGINGCONFIGURATIONREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class DescribeLoggingConfigurationRequestPrivate;

class QTAWSAMP_EXPORT DescribeLoggingConfigurationRequest : public AmpRequest {

public:
    DescribeLoggingConfigurationRequest(const DescribeLoggingConfigurationRequest &other);
    DescribeLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingConfigurationRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
