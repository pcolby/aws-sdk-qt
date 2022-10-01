// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONALUNITRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONALUNITRESPONSE_H

#include "organizationsresponse.h"
#include "describeorganizationalunitrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeOrganizationalUnitResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeOrganizationalUnitResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribeOrganizationalUnitResponse(const DescribeOrganizationalUnitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationalUnitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationalUnitResponse)
    Q_DISABLE_COPY(DescribeOrganizationalUnitResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
