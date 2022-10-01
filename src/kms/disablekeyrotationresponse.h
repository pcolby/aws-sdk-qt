// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYROTATIONRESPONSE_H
#define QTAWS_DISABLEKEYROTATIONRESPONSE_H

#include "kmsresponse.h"
#include "disablekeyrotationrequest.h"

namespace QtAws {
namespace Kms {

class DisableKeyRotationResponsePrivate;

class QTAWSKMS_EXPORT DisableKeyRotationResponse : public KmsResponse {
    Q_OBJECT

public:
    DisableKeyRotationResponse(const DisableKeyRotationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableKeyRotationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableKeyRotationResponse)
    Q_DISABLE_COPY(DisableKeyRotationResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
