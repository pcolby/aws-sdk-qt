// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVCENTERCLIENTSRESPONSE_H
#define QTAWS_DESCRIBEVCENTERCLIENTSRESPONSE_H

#include "mgnresponse.h"
#include "describevcenterclientsrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeVcenterClientsResponsePrivate;

class QTAWSMGN_EXPORT DescribeVcenterClientsResponse : public MgnResponse {
    Q_OBJECT

public:
    DescribeVcenterClientsResponse(const DescribeVcenterClientsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVcenterClientsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVcenterClientsResponse)
    Q_DISABLE_COPY(DescribeVcenterClientsResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
