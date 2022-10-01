// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHARVESTJOBRESPONSE_H
#define QTAWS_DESCRIBEHARVESTJOBRESPONSE_H

#include "mediapackageresponse.h"
#include "describeharvestjobrequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeHarvestJobResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT DescribeHarvestJobResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    DescribeHarvestJobResponse(const DescribeHarvestJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHarvestJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHarvestJobResponse)
    Q_DISABLE_COPY(DescribeHarvestJobResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
