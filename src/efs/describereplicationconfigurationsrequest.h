// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeReplicationConfigurationsRequestPrivate;

class QTAWSEFS_EXPORT DescribeReplicationConfigurationsRequest : public EfsRequest {

public:
    DescribeReplicationConfigurationsRequest(const DescribeReplicationConfigurationsRequest &other);
    DescribeReplicationConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationConfigurationsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
