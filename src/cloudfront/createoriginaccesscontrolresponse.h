// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORIGINACCESSCONTROLRESPONSE_H
#define QTAWS_CREATEORIGINACCESSCONTROLRESPONSE_H

#include "cloudfrontresponse.h"
#include "createoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateOriginAccessControlResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateOriginAccessControlResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateOriginAccessControlResponse(const CreateOriginAccessControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOriginAccessControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOriginAccessControlResponse)
    Q_DISABLE_COPY(CreateOriginAccessControlResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
