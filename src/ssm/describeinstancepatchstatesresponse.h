// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEPATCHSTATESRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEPATCHSTATESRESPONSE_H

#include "ssmresponse.h"
#include "describeinstancepatchstatesrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstancePatchStatesResponsePrivate;

class QTAWSSSM_EXPORT DescribeInstancePatchStatesResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeInstancePatchStatesResponse(const DescribeInstancePatchStatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstancePatchStatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancePatchStatesResponse)
    Q_DISABLE_COPY(DescribeInstancePatchStatesResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
