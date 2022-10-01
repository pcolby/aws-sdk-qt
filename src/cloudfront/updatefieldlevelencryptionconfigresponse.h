// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "updatefieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateFieldLevelEncryptionConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateFieldLevelEncryptionConfigResponse(const UpdateFieldLevelEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFieldLevelEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(UpdateFieldLevelEncryptionConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
