// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILERESPONSE_H
#define QTAWS_DESCRIBEPROFILERESPONSE_H

#include "transferresponse.h"
#include "describeprofilerequest.h"

namespace QtAws {
namespace Transfer {

class DescribeProfileResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeProfileResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeProfileResponse(const DescribeProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProfileResponse)
    Q_DISABLE_COPY(DescribeProfileResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
