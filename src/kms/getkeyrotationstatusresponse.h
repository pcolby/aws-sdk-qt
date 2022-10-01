// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYROTATIONSTATUSRESPONSE_H
#define QTAWS_GETKEYROTATIONSTATUSRESPONSE_H

#include "kmsresponse.h"
#include "getkeyrotationstatusrequest.h"

namespace QtAws {
namespace Kms {

class GetKeyRotationStatusResponsePrivate;

class QTAWSKMS_EXPORT GetKeyRotationStatusResponse : public KmsResponse {
    Q_OBJECT

public:
    GetKeyRotationStatusResponse(const GetKeyRotationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetKeyRotationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyRotationStatusResponse)
    Q_DISABLE_COPY(GetKeyRotationStatusResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
