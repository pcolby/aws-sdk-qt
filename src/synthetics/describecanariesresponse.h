// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESRESPONSE_H
#define QTAWS_DESCRIBECANARIESRESPONSE_H

#include "syntheticsresponse.h"
#include "describecanariesrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesResponsePrivate;

class QTAWSSYNTHETICS_EXPORT DescribeCanariesResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    DescribeCanariesResponse(const DescribeCanariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCanariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCanariesResponse)
    Q_DISABLE_COPY(DescribeCanariesResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
