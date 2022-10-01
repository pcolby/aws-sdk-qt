// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletefieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteFieldLevelEncryptionConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteFieldLevelEncryptionConfigResponse(const DeleteFieldLevelEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFieldLevelEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(DeleteFieldLevelEncryptionConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
