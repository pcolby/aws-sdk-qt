// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEGROUPRESPONSE_H
#define QTAWS_DESCRIBENODEGROUPRESPONSE_H

#include "eksresponse.h"
#include "describenodegrouprequest.h"

namespace QtAws {
namespace Eks {

class DescribeNodegroupResponsePrivate;

class QTAWSEKS_EXPORT DescribeNodegroupResponse : public EksResponse {
    Q_OBJECT

public:
    DescribeNodegroupResponse(const DescribeNodegroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNodegroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodegroupResponse)
    Q_DISABLE_COPY(DescribeNodegroupResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
