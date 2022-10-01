// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBLOGITEMSRESPONSE_H
#define QTAWS_DESCRIBEJOBLOGITEMSRESPONSE_H

#include "drsresponse.h"
#include "describejoblogitemsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeJobLogItemsResponsePrivate;

class QTAWSDRS_EXPORT DescribeJobLogItemsResponse : public DrsResponse {
    Q_OBJECT

public:
    DescribeJobLogItemsResponse(const DescribeJobLogItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobLogItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobLogItemsResponse)
    Q_DISABLE_COPY(DescribeJobLogItemsResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
