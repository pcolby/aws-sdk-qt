// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALCLUSTERSRESPONSE_H
#define QTAWS_DESCRIBEGLOBALCLUSTERSRESPONSE_H

#include "neptuneresponse.h"
#include "describeglobalclustersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeGlobalClustersResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeGlobalClustersResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeGlobalClustersResponse(const DescribeGlobalClustersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGlobalClustersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalClustersResponse)
    Q_DISABLE_COPY(DescribeGlobalClustersResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
