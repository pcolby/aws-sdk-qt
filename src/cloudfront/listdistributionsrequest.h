// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSREQUEST_H
#define QTAWS_LISTDISTRIBUTIONSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListDistributionsRequest : public CloudFrontRequest {

public:
    ListDistributionsRequest(const ListDistributionsRequest &other);
    ListDistributionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDistributionsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
