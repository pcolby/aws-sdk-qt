// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGDISTRIBUTIONSREQUEST_H
#define QTAWS_LISTSTREAMINGDISTRIBUTIONSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListStreamingDistributionsRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListStreamingDistributionsRequest : public CloudFrontRequest {

public:
    ListStreamingDistributionsRequest(const ListStreamingDistributionsRequest &other);
    ListStreamingDistributionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamingDistributionsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
