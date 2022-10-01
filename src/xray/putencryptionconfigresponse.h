// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENCRYPTIONCONFIGRESPONSE_H
#define QTAWS_PUTENCRYPTIONCONFIGRESPONSE_H

#include "xrayresponse.h"
#include "putencryptionconfigrequest.h"

namespace QtAws {
namespace XRay {

class PutEncryptionConfigResponsePrivate;

class QTAWSXRAY_EXPORT PutEncryptionConfigResponse : public XRayResponse {
    Q_OBJECT

public:
    PutEncryptionConfigResponse(const PutEncryptionConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEncryptionConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEncryptionConfigResponse)
    Q_DISABLE_COPY(PutEncryptionConfigResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
