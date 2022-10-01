// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLCONFIGRESPONSE_H
#define QTAWS_GETORIGINACCESSCONTROLCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getoriginaccesscontrolconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginAccessControlConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetOriginAccessControlConfigResponse(const GetOriginAccessControlConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOriginAccessControlConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginAccessControlConfigResponse)
    Q_DISABLE_COPY(GetOriginAccessControlConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
