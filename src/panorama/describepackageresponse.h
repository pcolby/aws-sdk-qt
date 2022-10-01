// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGERESPONSE_H
#define QTAWS_DESCRIBEPACKAGERESPONSE_H

#include "panoramaresponse.h"
#include "describepackagerequest.h"

namespace QtAws {
namespace Panorama {

class DescribePackageResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribePackageResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribePackageResponse(const DescribePackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageResponse)
    Q_DISABLE_COPY(DescribePackageResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
