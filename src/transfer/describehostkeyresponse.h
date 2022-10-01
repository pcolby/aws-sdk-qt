// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTKEYRESPONSE_H
#define QTAWS_DESCRIBEHOSTKEYRESPONSE_H

#include "transferresponse.h"
#include "describehostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeHostKeyResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeHostKeyResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeHostKeyResponse(const DescribeHostKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHostKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostKeyResponse)
    Q_DISABLE_COPY(DescribeHostKeyResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
