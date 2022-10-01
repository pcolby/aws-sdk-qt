// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTACCESSRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTACCESSRESPONSE_H

#include "redshiftresponse.h"
#include "describeendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAccessResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeEndpointAccessResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeEndpointAccessResponse(const DescribeEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointAccessResponse)
    Q_DISABLE_COPY(DescribeEndpointAccessResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
