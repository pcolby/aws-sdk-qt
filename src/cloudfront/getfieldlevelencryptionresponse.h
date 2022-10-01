// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONRESPONSE_H
#define QTAWS_GETFIELDLEVELENCRYPTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "getfieldlevelencryptionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetFieldLevelEncryptionResponse(const GetFieldLevelEncryptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFieldLevelEncryptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
