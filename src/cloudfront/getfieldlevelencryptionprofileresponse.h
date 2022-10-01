// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILERESPONSE_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILERESPONSE_H

#include "cloudfrontresponse.h"
#include "getfieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionProfileResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetFieldLevelEncryptionProfileResponse(const GetFieldLevelEncryptionProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFieldLevelEncryptionProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionProfileResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
