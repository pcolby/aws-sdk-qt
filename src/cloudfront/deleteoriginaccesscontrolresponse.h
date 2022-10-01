// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORIGINACCESSCONTROLRESPONSE_H
#define QTAWS_DELETEORIGINACCESSCONTROLRESPONSE_H

#include "cloudfrontresponse.h"
#include "deleteoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteOriginAccessControlResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteOriginAccessControlResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteOriginAccessControlResponse(const DeleteOriginAccessControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOriginAccessControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOriginAccessControlResponse)
    Q_DISABLE_COPY(DeleteOriginAccessControlResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
