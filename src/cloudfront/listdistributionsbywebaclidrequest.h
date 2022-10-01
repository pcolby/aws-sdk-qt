// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYWEBACLIDREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSBYWEBACLIDREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByWebACLIdRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsByWebACLIdRequest : public CloudFrontRequest {

public:
    ListDistributionsByWebACLIdRequest(const ListDistributionsByWebACLIdRequest &other);
    ListDistributionsByWebACLIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsByWebACLIdRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
