// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERDBREVISIONSREQUEST_H
#define QTAWS_DESCRIBECLUSTERDBREVISIONSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterDbRevisionsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterDbRevisionsRequest : public RedshiftRequest {

public:
    DescribeClusterDbRevisionsRequest(const DescribeClusterDbRevisionsRequest &other);
    DescribeClusterDbRevisionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterDbRevisionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
