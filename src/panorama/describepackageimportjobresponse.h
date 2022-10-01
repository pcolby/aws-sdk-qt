// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEIMPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEPACKAGEIMPORTJOBRESPONSE_H

#include "panoramaresponse.h"
#include "describepackageimportjobrequest.h"

namespace QtAws {
namespace Panorama {

class DescribePackageImportJobResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribePackageImportJobResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribePackageImportJobResponse(const DescribePackageImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackageImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageImportJobResponse)
    Q_DISABLE_COPY(DescribePackageImportJobResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
