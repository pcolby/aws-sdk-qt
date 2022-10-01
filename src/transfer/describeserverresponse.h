// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERRESPONSE_H
#define QTAWS_DESCRIBESERVERRESPONSE_H

#include "transferresponse.h"
#include "describeserverrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeServerResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeServerResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeServerResponse(const DescribeServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServerResponse)
    Q_DISABLE_COPY(DescribeServerResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
