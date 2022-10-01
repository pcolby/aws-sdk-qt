// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSRESPONSE_H
#define QTAWS_DESCRIBEACCESSRESPONSE_H

#include "transferresponse.h"
#include "describeaccessrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeAccessResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeAccessResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeAccessResponse(const DescribeAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessResponse)
    Q_DISABLE_COPY(DescribeAccessResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
