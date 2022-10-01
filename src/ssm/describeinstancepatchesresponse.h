// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHESRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEPATCHESRESPONSE_H

#include "ssmresponse.h"
#include "describeinstancepatchesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchesResponsePrivate;

class QTAWSSSM_EXPORT DescribeInstancePatchesResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeInstancePatchesResponse(const DescribeInstancePatchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstancePatchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancePatchesResponse)
    Q_DISABLE_COPY(DescribeInstancePatchesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
