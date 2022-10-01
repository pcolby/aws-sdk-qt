// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESIZERESPONSE_H
#define QTAWS_DESCRIBERESIZERESPONSE_H

#include "redshiftresponse.h"
#include "describeresizerequest.h"

namespace QtAws {
namespace Redshift {

class DescribeResizeResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeResizeResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeResizeResponse(const DescribeResizeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResizeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResizeResponse)
    Q_DISABLE_COPY(DescribeResizeResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
