// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPOPTIONSRESPONSE_H
#define QTAWS_DESCRIBEOPTIONGROUPOPTIONSRESPONSE_H

#include "rdsresponse.h"
#include "describeoptiongroupoptionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupOptionsResponsePrivate;

class QTAWSRDS_EXPORT DescribeOptionGroupOptionsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeOptionGroupOptionsResponse(const DescribeOptionGroupOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOptionGroupOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptionGroupOptionsResponse)
    Q_DISABLE_COPY(DescribeOptionGroupOptionsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
