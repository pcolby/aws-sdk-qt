// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUBRESPONSE_H
#define QTAWS_DESCRIBEHUBRESPONSE_H

#include "securityhubresponse.h"
#include "describehubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeHubResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DescribeHubResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DescribeHubResponse(const DescribeHubRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHubRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHubResponse)
    Q_DISABLE_COPY(DescribeHubResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
