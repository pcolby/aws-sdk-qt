// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONTEMPLATESREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeReplicationConfigurationTemplatesRequestPrivate;

class QTAWSMGN_EXPORT DescribeReplicationConfigurationTemplatesRequest : public MgnRequest {

public:
    DescribeReplicationConfigurationTemplatesRequest(const DescribeReplicationConfigurationTemplatesRequest &other);
    DescribeReplicationConfigurationTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationConfigurationTemplatesRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
