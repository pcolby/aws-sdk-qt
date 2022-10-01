// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVATIONSRESPONSE_H
#define QTAWS_DESCRIBEACTIVATIONSRESPONSE_H

#include "ssmresponse.h"
#include "describeactivationsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeActivationsResponsePrivate;

class QTAWSSSM_EXPORT DescribeActivationsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeActivationsResponse(const DescribeActivationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActivationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivationsResponse)
    Q_DISABLE_COPY(DescribeActivationsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
