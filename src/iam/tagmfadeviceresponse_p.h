// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMFADEVICERESPONSE_P_H
#define QTAWS_TAGMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagMFADeviceResponse;

class TagMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit TagMFADeviceResponsePrivate(TagMFADeviceResponse * const q);

    void parseTagMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagMFADeviceResponse)
    Q_DISABLE_COPY(TagMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
