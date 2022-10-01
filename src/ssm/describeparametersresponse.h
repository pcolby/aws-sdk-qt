// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERSRESPONSE_H
#define QTAWS_DESCRIBEPARAMETERSRESPONSE_H

#include "ssmresponse.h"
#include "describeparametersrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeParametersResponsePrivate;

class QTAWSSSM_EXPORT DescribeParametersResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeParametersResponse(const DescribeParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeParametersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeParametersResponse)
    Q_DISABLE_COPY(DescribeParametersResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
