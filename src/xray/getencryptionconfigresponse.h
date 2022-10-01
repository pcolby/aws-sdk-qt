// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_GETENCRYPTIONCONFIGRESPONSE_H

#include "xrayresponse.h"
#include "getencryptionconfigrequest.h"

namespace QtAws {
namespace XRay {

class GetEncryptionConfigResponsePrivate;

class QTAWSXRAY_EXPORT GetEncryptionConfigResponse : public XRayResponse {
    Q_OBJECT

public:
    GetEncryptionConfigResponse(const GetEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEncryptionConfigResponse)
    Q_DISABLE_COPY(GetEncryptionConfigResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
