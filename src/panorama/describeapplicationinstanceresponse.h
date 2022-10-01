// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCERESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCERESPONSE_H

#include "panoramaresponse.h"
#include "describeapplicationinstancerequest.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribeApplicationInstanceResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribeApplicationInstanceResponse(const DescribeApplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationInstanceResponse)
    Q_DISABLE_COPY(DescribeApplicationInstanceResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
