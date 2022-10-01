// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONRESPONSE_H

#include "organizationsresponse.h"
#include "describeorganizationrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeOrganizationResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribeOrganizationResponse(const DescribeOrganizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationResponse)
    Q_DISABLE_COPY(DescribeOrganizationResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
