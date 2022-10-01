// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGAGEMENTRESPONSE_H
#define QTAWS_DESCRIBEENGAGEMENTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "describeengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class DescribeEngagementResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT DescribeEngagementResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    DescribeEngagementResponse(const DescribeEngagementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEngagementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEngagementResponse)
    Q_DISABLE_COPY(DescribeEngagementResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
