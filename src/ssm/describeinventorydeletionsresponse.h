// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINVENTORYDELETIONSRESPONSE_H
#define QTAWS_DESCRIBEINVENTORYDELETIONSRESPONSE_H

#include "ssmresponse.h"
#include "describeinventorydeletionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInventoryDeletionsResponsePrivate;

class QTAWSSSM_EXPORT DescribeInventoryDeletionsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeInventoryDeletionsResponse(const DescribeInventoryDeletionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInventoryDeletionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInventoryDeletionsResponse)
    Q_DISABLE_COPY(DescribeInventoryDeletionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
