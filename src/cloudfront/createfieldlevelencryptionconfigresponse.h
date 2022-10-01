// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "createfieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateFieldLevelEncryptionConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateFieldLevelEncryptionConfigResponse(const CreateFieldLevelEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFieldLevelEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(CreateFieldLevelEncryptionConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
