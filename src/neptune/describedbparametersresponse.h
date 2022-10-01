// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEDBPARAMETERSRESPONSE_H

#include "neptuneresponse.h"
#include "describedbparametersrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBParametersResponsePrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBParametersResponse : public NeptuneResponse {
    Q_OBJECT

public:
    DescribeDBParametersResponse(const DescribeDBParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBParametersResponse)
    Q_DISABLE_COPY(DescribeDBParametersResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif
