// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPSITEMSRESPONSE_H
#define QTAWS_DESCRIBEOPSITEMSRESPONSE_H

#include "ssmresponse.h"
#include "describeopsitemsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeOpsItemsResponsePrivate;

class QTAWSSSM_EXPORT DescribeOpsItemsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeOpsItemsResponse(const DescribeOpsItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOpsItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOpsItemsResponse)
    Q_DISABLE_COPY(DescribeOpsItemsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
