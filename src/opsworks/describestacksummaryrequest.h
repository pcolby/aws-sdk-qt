// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSUMMARYREQUEST_H
#define QTAWS_DESCRIBESTACKSUMMARYREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackSummaryRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeStackSummaryRequest : public OpsWorksRequest {

public:
    DescribeStackSummaryRequest(const DescribeStackSummaryRequest &other);
    DescribeStackSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStackSummaryRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
