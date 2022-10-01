// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTCREATIONREQUEST_H
#define QTAWS_DESCRIBEREPORTCREATIONREQUEST_H

#include "resourcegroupstaggingrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class DescribeReportCreationRequestPrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT DescribeReportCreationRequest : public ResourceGroupsTaggingRequest {

public:
    DescribeReportCreationRequest(const DescribeReportCreationRequest &other);
    DescribeReportCreationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportCreationRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
