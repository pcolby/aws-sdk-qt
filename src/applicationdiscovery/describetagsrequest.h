// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_H
#define QTAWS_DESCRIBETAGSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeTagsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeTagsRequest : public ApplicationDiscoveryRequest {

public:
    DescribeTagsRequest(const DescribeTagsRequest &other);
    DescribeTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTagsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
