// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSRESPONSE_H

#include "redshiftresponse.h"
#include "describedefaultclusterparametersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeDefaultClusterParametersResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeDefaultClusterParametersResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeDefaultClusterParametersResponse(const DescribeDefaultClusterParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDefaultClusterParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDefaultClusterParametersResponse)
    Q_DISABLE_COPY(DescribeDefaultClusterParametersResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
