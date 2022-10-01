// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINACCESSCONTROLSRESPONSE_H
#define QTAWS_LISTORIGINACCESSCONTROLSRESPONSE_H

#include "cloudfrontresponse.h"
#include "listoriginaccesscontrolsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListOriginAccessControlsResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT ListOriginAccessControlsResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    ListOriginAccessControlsResponse(const ListOriginAccessControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOriginAccessControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginAccessControlsResponse)
    Q_DISABLE_COPY(ListOriginAccessControlsResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
