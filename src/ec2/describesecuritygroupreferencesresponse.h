// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H
#define QTAWS_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H

#include "ec2response.h"
#include "describesecuritygroupreferencesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupReferencesResponsePrivate;

class QTAWSEC2_EXPORT DescribeSecurityGroupReferencesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSecurityGroupReferencesResponse(const DescribeSecurityGroupReferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityGroupReferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityGroupReferencesResponse)
    Q_DISABLE_COPY(DescribeSecurityGroupReferencesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
