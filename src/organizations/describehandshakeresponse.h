// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHANDSHAKERESPONSE_H
#define QTAWS_DESCRIBEHANDSHAKERESPONSE_H

#include "organizationsresponse.h"
#include "describehandshakerequest.h"

namespace QtAws {
namespace Organizations {

class DescribeHandshakeResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribeHandshakeResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribeHandshakeResponse(const DescribeHandshakeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHandshakeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHandshakeResponse)
    Q_DISABLE_COPY(DescribeHandshakeResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
