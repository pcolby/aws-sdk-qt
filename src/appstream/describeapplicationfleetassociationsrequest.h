// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONFLEETASSOCIATIONSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeApplicationFleetAssociationsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeApplicationFleetAssociationsRequest : public AppStreamRequest {

public:
    DescribeApplicationFleetAssociationsRequest(const DescribeApplicationFleetAssociationsRequest &other);
    DescribeApplicationFleetAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationFleetAssociationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
