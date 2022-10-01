// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGRESPONSE_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getfieldlevelencryptionprofileconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionProfileConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetFieldLevelEncryptionProfileConfigResponse(const GetFieldLevelEncryptionProfileConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFieldLevelEncryptionProfileConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionProfileConfigResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionProfileConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
