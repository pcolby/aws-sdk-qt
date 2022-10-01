// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCEDETAILSRESPONSE_H

#include "panoramaresponse.h"
#include "describeapplicationinstancedetailsrequest.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceDetailsResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribeApplicationInstanceDetailsResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribeApplicationInstanceDetailsResponse(const DescribeApplicationInstanceDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationInstanceDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationInstanceDetailsResponse)
    Q_DISABLE_COPY(DescribeApplicationInstanceDetailsResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
