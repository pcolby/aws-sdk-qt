// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSRESPONSE_H
#define QTAWS_DESCRIBEEFFECTIVEINSTANCEASSOCIATIONSRESPONSE_H

#include "ssmresponse.h"
#include "describeeffectiveinstanceassociationsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeEffectiveInstanceAssociationsResponsePrivate;

class QTAWSSSM_EXPORT DescribeEffectiveInstanceAssociationsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeEffectiveInstanceAssociationsResponse(const DescribeEffectiveInstanceAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEffectiveInstanceAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEffectiveInstanceAssociationsResponse)
    Q_DISABLE_COPY(DescribeEffectiveInstanceAssociationsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
