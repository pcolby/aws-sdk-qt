// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILERESPONSE_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILERESPONSE_H

#include "cloudfrontresponse.h"
#include "createfieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionProfileResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateFieldLevelEncryptionProfileResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateFieldLevelEncryptionProfileResponse(const CreateFieldLevelEncryptionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFieldLevelEncryptionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(CreateFieldLevelEncryptionProfileResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
