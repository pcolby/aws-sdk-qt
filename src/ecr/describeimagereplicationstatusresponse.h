// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSRESPONSE_H

#include "ecrresponse.h"
#include "describeimagereplicationstatusrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeImageReplicationStatusResponsePrivate;

class QTAWSECR_EXPORT DescribeImageReplicationStatusResponse : public EcrResponse {
    Q_OBJECT

public:
    DescribeImageReplicationStatusResponse(const DescribeImageReplicationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageReplicationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageReplicationStatusResponse)
    Q_DISABLE_COPY(DescribeImageReplicationStatusResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
