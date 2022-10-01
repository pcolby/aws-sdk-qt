// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILERESPONSE_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILERESPONSE_H

#include "cloudfrontresponse.h"
#include "updatefieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionProfileResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateFieldLevelEncryptionProfileResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    UpdateFieldLevelEncryptionProfileResponse(const UpdateFieldLevelEncryptionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFieldLevelEncryptionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(UpdateFieldLevelEncryptionProfileResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
