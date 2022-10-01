// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYROTATIONRESPONSE_H
#define QTAWS_ENABLEKEYROTATIONRESPONSE_H

#include "kmsresponse.h"
#include "enablekeyrotationrequest.h"

namespace QtAws {
namespace Kms {

class EnableKeyRotationResponsePrivate;

class QTAWSKMS_EXPORT EnableKeyRotationResponse : public KmsResponse {
    Q_OBJECT

public:
    EnableKeyRotationResponse(const EnableKeyRotationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableKeyRotationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableKeyRotationResponse)
    Q_DISABLE_COPY(EnableKeyRotationResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
