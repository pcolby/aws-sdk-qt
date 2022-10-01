// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORIGINACCESSCONTROLRESPONSE_H
#define QTAWS_UPDATEORIGINACCESSCONTROLRESPONSE_H

#include "cloudfrontresponse.h"
#include "updateoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateOriginAccessControlResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateOriginAccessControlResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateOriginAccessControlResponse(const UpdateOriginAccessControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOriginAccessControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOriginAccessControlResponse)
    Q_DISABLE_COPY(UpdateOriginAccessControlResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
