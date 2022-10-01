// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEFFECTIVEPOLICYRESPONSE_H
#define QTAWS_DESCRIBEEFFECTIVEPOLICYRESPONSE_H

#include "organizationsresponse.h"
#include "describeeffectivepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeEffectivePolicyResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeEffectivePolicyResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribeEffectivePolicyResponse(const DescribeEffectivePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEffectivePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEffectivePolicyResponse)
    Q_DISABLE_COPY(DescribeEffectivePolicyResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
