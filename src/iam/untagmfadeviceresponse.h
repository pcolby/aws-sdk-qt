// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMFADEVICERESPONSE_H
#define QTAWS_UNTAGMFADEVICERESPONSE_H

#include "iamresponse.h"
#include "untagmfadevicerequest.h"

namespace QtAws {
namespace Iam {

class UntagMFADeviceResponsePrivate;

class QTAWSIAM_EXPORT UntagMFADeviceResponse : public IamResponse {
    Q_OBJECT

public:
    UntagMFADeviceResponse(const UntagMFADeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagMFADeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagMFADeviceResponse)
    Q_DISABLE_COPY(UntagMFADeviceResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
