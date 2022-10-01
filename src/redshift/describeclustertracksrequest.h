// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERTRACKSREQUEST_H
#define QTAWS_DESCRIBECLUSTERTRACKSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterTracksRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterTracksRequest : public RedshiftRequest {

public:
    DescribeClusterTracksRequest(const DescribeClusterTracksRequest &other);
    DescribeClusterTracksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterTracksRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
