// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILERESPONSE_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILERESPONSE_H

#include "cloudfrontresponse.h"
#include "deletefieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionProfileResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteFieldLevelEncryptionProfileResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteFieldLevelEncryptionProfileResponse(const DeleteFieldLevelEncryptionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFieldLevelEncryptionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(DeleteFieldLevelEncryptionProfileResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
