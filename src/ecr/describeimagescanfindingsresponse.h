// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESCANFINDINGSRESPONSE_H
#define QTAWS_DESCRIBEIMAGESCANFINDINGSRESPONSE_H

#include "ecrresponse.h"
#include "describeimagescanfindingsrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeImageScanFindingsResponsePrivate;

class QTAWSECR_EXPORT DescribeImageScanFindingsResponse : public EcrResponse {
    Q_OBJECT

public:
    DescribeImageScanFindingsResponse(const DescribeImageScanFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageScanFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageScanFindingsResponse)
    Q_DISABLE_COPY(DescribeImageScanFindingsResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
