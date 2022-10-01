// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEDEFAULTPARAMETERSRESPONSE_H

#include "daxresponse.h"
#include "describedefaultparametersrequest.h"

namespace QtAws {
namespace Dax {

class DescribeDefaultParametersResponsePrivate;

class QTAWSDAX_EXPORT DescribeDefaultParametersResponse : public DaxResponse {
    Q_OBJECT

public:
    DescribeDefaultParametersResponse(const DescribeDefaultParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDefaultParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDefaultParametersResponse)
    Q_DISABLE_COPY(DescribeDefaultParametersResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
