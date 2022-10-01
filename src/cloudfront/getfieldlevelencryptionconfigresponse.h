// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_GETFIELDLEVELENCRYPTIONCONFIGRESPONSE_H

#include "cloudfrontresponse.h"
#include "getfieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionConfigResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionConfigResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetFieldLevelEncryptionConfigResponse(const GetFieldLevelEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFieldLevelEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionConfigResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
