// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSRESPONSE_H

#include "neptuneresponse.h"
#include "describedbengineversionsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBEngineVersionsResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBEngineVersionsResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeDBEngineVersionsResponse(const DescribeDBEngineVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBEngineVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeDBEngineVersionsResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
