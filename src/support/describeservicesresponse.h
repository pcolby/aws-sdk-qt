// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESRESPONSE_H
#define QTAWS_DESCRIBESERVICESRESPONSE_H

#include "supportresponse.h"
#include "describeservicesrequest.h"

namespace QtAws {
namespace Support {

class DescribeServicesResponsePrivate;

class QTAWSSUPPORT_EXPORT DescribeServicesResponse : public SupportResponse {
    Q_OBJECT

public:
    DescribeServicesResponse(const DescribeServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServicesResponse)
    Q_DISABLE_COPY(DescribeServicesResponse)

};

} // namespace Support
} // namespace QtAws

#endif
