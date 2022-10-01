// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCONFIGURATIONSRESPONSE_H
#define QTAWS_DESCRIBEHSMCONFIGURATIONSRESPONSE_H

#include "redshiftresponse.h"
#include "describehsmconfigurationsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmConfigurationsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeHsmConfigurationsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeHsmConfigurationsResponse(const DescribeHsmConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHsmConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHsmConfigurationsResponse)
    Q_DISABLE_COPY(DescribeHsmConfigurationsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
