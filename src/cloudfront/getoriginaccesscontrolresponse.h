// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLRESPONSE_H
#define QTAWS_GETORIGINACCESSCONTROLRESPONSE_H

#include "cloudfrontresponse.h"
#include "getoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetOriginAccessControlResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetOriginAccessControlResponse(const GetOriginAccessControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOriginAccessControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOriginAccessControlResponse)
    Q_DISABLE_COPY(GetOriginAccessControlResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
