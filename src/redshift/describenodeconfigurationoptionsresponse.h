// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODECONFIGURATIONOPTIONSRESPONSE_H
#define QTAWS_DESCRIBENODECONFIGURATIONOPTIONSRESPONSE_H

#include "redshiftresponse.h"
#include "describenodeconfigurationoptionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeNodeConfigurationOptionsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeNodeConfigurationOptionsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeNodeConfigurationOptionsResponse(const DescribeNodeConfigurationOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNodeConfigurationOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeConfigurationOptionsResponse)
    Q_DISABLE_COPY(DescribeNodeConfigurationOptionsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
