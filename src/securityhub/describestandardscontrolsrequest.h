// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSCONTROLSREQUEST_H
#define QTAWS_DESCRIBESTANDARDSCONTROLSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsControlsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DescribeStandardsControlsRequest : public SecurityHubRequest {

public:
    DescribeStandardsControlsRequest(const DescribeStandardsControlsRequest &other);
    DescribeStandardsControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStandardsControlsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
