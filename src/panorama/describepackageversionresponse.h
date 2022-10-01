// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEVERSIONRESPONSE_H
#define QTAWS_DESCRIBEPACKAGEVERSIONRESPONSE_H

#include "panoramaresponse.h"
#include "describepackageversionrequest.h"

namespace QtAws {
namespace Panorama {

class DescribePackageVersionResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribePackageVersionResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribePackageVersionResponse(const DescribePackageVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackageVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackageVersionResponse)
    Q_DISABLE_COPY(DescribePackageVersionResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
