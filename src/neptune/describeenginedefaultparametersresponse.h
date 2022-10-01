// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEENGINEDEFAULTPARAMETERSRESPONSE_H

#include "neptuneresponse.h"
#include "describeenginedefaultparametersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEngineDefaultParametersResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeEngineDefaultParametersResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeEngineDefaultParametersResponse(const DescribeEngineDefaultParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEngineDefaultParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngineDefaultParametersResponse)
    Q_DISABLE_COPY(DescribeEngineDefaultParametersResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
