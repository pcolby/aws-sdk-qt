// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecordersRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationRecordersRequest : public ConfigServiceRequest {

public:
    DescribeConfigurationRecordersRequest(const DescribeConfigurationRecordersRequest &other);
    DescribeConfigurationRecordersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRecordersRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
