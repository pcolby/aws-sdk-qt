// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONRESPONSE_H
#define QTAWS_DESCRIBEADDONRESPONSE_H

#include "eksresponse.h"
#include "describeaddonrequest.h"

namespace QtAws {
namespace Eks {

class DescribeAddonResponsePrivate;

class QTAWSEKS_EXPORT DescribeAddonResponse : public EksResponse {
    Q_OBJECT

public:
    DescribeAddonResponse(const DescribeAddonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAddonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddonResponse)
    Q_DISABLE_COPY(DescribeAddonResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
