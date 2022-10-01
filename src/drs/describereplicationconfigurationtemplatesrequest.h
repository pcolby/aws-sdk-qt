// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeReplicationConfigurationTemplatesRequestPrivate;

class QTAWSDRS_EXPORT DescribeReplicationConfigurationTemplatesRequest : public DrsRequest {

public:
    DescribeReplicationConfigurationTemplatesRequest(const DescribeReplicationConfigurationTemplatesRequest &other);
    DescribeReplicationConfigurationTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationConfigurationTemplatesRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
