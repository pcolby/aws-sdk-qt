// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEINFORMATIONRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEINFORMATIONRESPONSE_H

#include "ssmresponse.h"
#include "describeinstanceinformationrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInstanceInformationResponsePrivate;

class QTAWSSSM_EXPORT DescribeInstanceInformationResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeInstanceInformationResponse(const DescribeInstanceInformationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceInformationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceInformationResponse)
    Q_DISABLE_COPY(DescribeInstanceInformationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
