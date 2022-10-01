// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDEMBEDURLRESPONSE_H
#define QTAWS_GETDASHBOARDEMBEDURLRESPONSE_H

#include "quicksightresponse.h"
#include "getdashboardembedurlrequest.h"

namespace QtAws {
namespace QuickSight {

class GetDashboardEmbedUrlResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT GetDashboardEmbedUrlResponse : public QuickSightResponse {
    Q_OBJECT

public:
    GetDashboardEmbedUrlResponse(const GetDashboardEmbedUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDashboardEmbedUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDashboardEmbedUrlResponse)
    Q_DISABLE_COPY(GetDashboardEmbedUrlResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
