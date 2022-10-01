// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONCONFIGURATIONSRESPONSE_H

#include "efsresponse.h"
#include "describereplicationconfigurationsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeReplicationConfigurationsResponsePrivate;

class QTAWSEFS_EXPORT DescribeReplicationConfigurationsResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeReplicationConfigurationsResponse(const DescribeReplicationConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationConfigurationsResponse)
    Q_DISABLE_COPY(DescribeReplicationConfigurationsResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
