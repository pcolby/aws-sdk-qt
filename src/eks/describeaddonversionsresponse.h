// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONVERSIONSRESPONSE_H
#define QTAWS_DESCRIBEADDONVERSIONSRESPONSE_H

#include "eksresponse.h"
#include "describeaddonversionsrequest.h"

namespace QtAws {
namespace Eks {

class DescribeAddonVersionsResponsePrivate;

class QTAWSEKS_EXPORT DescribeAddonVersionsResponse : public EksResponse {
    Q_OBJECT

public:
    DescribeAddonVersionsResponse(const DescribeAddonVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAddonVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddonVersionsResponse)
    Q_DISABLE_COPY(DescribeAddonVersionsResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
