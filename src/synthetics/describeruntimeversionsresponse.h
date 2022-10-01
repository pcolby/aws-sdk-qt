// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBERUNTIMEVERSIONSRESPONSE_H

#include "syntheticsresponse.h"
#include "describeruntimeversionsrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeRuntimeVersionsResponsePrivate;

class QTAWSSYNTHETICS_EXPORT DescribeRuntimeVersionsResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    DescribeRuntimeVersionsResponse(const DescribeRuntimeVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRuntimeVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuntimeVersionsResponse)
    Q_DISABLE_COPY(DescribeRuntimeVersionsResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
