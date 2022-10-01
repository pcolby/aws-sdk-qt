// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERPARAMETERSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclusterparametersrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParametersResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterParametersResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterParametersResponse(const DescribeClusterParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterParametersResponse)
    Q_DISABLE_COPY(DescribeClusterParametersResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
