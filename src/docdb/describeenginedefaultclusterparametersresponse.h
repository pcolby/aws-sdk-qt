// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEENGINEDEFAULTCLUSTERPARAMETERSRESPONSE_H

#include "docdbresponse.h"
#include "describeenginedefaultclusterparametersrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeEngineDefaultClusterParametersResponsePrivate;

class QTAWSDOCDB_EXPORT DescribeEngineDefaultClusterParametersResponse : public DocDbResponse {
    Q_OBJECT

public:
    DescribeEngineDefaultClusterParametersResponse(const DescribeEngineDefaultClusterParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEngineDefaultClusterParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineDefaultClusterParametersResponse)
    Q_DISABLE_COPY(DescribeEngineDefaultClusterParametersResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
