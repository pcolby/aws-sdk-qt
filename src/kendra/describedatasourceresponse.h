// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCERESPONSE_H
#define QTAWS_DESCRIBEDATASOURCERESPONSE_H

#include "kendraresponse.h"
#include "describedatasourcerequest.h"

namespace QtAws {
namespace Kendra {

class DescribeDataSourceResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeDataSourceResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeDataSourceResponse(const DescribeDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSourceResponse)
    Q_DISABLE_COPY(DescribeDataSourceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
