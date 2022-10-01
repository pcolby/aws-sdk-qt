// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMFADEVICESRESPONSE_P_H
#define QTAWS_LISTVIRTUALMFADEVICESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListVirtualMFADevicesResponse;

class ListVirtualMFADevicesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListVirtualMFADevicesResponsePrivate(ListVirtualMFADevicesResponse * const q);

    void parseListVirtualMFADevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVirtualMFADevicesResponse)
    Q_DISABLE_COPY(ListVirtualMFADevicesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
