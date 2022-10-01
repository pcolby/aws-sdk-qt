// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECREATEACCOUNTSTATUSRESPONSE_H
#define QTAWS_DESCRIBECREATEACCOUNTSTATUSRESPONSE_H

#include "organizationsresponse.h"
#include "describecreateaccountstatusrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeCreateAccountStatusResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeCreateAccountStatusResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribeCreateAccountStatusResponse(const DescribeCreateAccountStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCreateAccountStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCreateAccountStatusResponse)
    Q_DISABLE_COPY(DescribeCreateAccountStatusResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
