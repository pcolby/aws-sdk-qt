// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTRESPONSE_H

#include "organizationsresponse.h"
#include "describeaccountrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeAccountResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeAccountResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribeAccountResponse(const DescribeAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountResponse)
    Q_DISABLE_COPY(DescribeAccountResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
