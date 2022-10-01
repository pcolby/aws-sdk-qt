// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODERESPONSE_H
#define QTAWS_DESCRIBENODERESPONSE_H

#include "panoramaresponse.h"
#include "describenoderequest.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribeNodeResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribeNodeResponse(const DescribeNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeResponse)
    Q_DISABLE_COPY(DescribeNodeResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
