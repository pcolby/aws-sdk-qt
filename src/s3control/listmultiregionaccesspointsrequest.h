// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIREGIONACCESSPOINTSREQUEST_H
#define QTAWS_LISTMULTIREGIONACCESSPOINTSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class ListMultiRegionAccessPointsRequestPrivate;

class QTAWSS3CONTROL_EXPORT ListMultiRegionAccessPointsRequest : public S3ControlRequest {

public:
    ListMultiRegionAccessPointsRequest(const ListMultiRegionAccessPointsRequest &other);
    ListMultiRegionAccessPointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiRegionAccessPointsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
