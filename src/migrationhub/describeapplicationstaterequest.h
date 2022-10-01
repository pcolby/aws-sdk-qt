// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSTATEREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONSTATEREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class DescribeApplicationStateRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT DescribeApplicationStateRequest : public MigrationHubRequest {

public:
    DescribeApplicationStateRequest(const DescribeApplicationStateRequest &other);
    DescribeApplicationStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationStateRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
