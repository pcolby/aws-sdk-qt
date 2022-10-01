// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRESPONSE_H
#define QTAWS_DESCRIBEJOBRESPONSE_H

#include "s3controlresponse.h"
#include "describejobrequest.h"

namespace QtAws {
namespace S3Control {

class DescribeJobResponsePrivate;

class QTAWSS3CONTROL_EXPORT DescribeJobResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DescribeJobResponse(const DescribeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobResponse)
    Q_DISABLE_COPY(DescribeJobResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
