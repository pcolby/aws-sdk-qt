// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESESSIONSRESPONSE_H
#define QTAWS_DESCRIBESESSIONSRESPONSE_H

#include "ssmresponse.h"
#include "describesessionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeSessionsResponsePrivate;

class QTAWSSSM_EXPORT DescribeSessionsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeSessionsResponse(const DescribeSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSessionsResponse)
    Q_DISABLE_COPY(DescribeSessionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
