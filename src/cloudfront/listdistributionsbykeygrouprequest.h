// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYKEYGROUPREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSBYKEYGROUPREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByKeyGroupRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByKeyGroupRequest : public CloudFrontRequest {

public:
    ListDistributionsByKeyGroupRequest(const ListDistributionsByKeyGroupRequest &other);
    ListDistributionsByKeyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByKeyGroupRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
