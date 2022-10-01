// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICESRESPONSE_P_H
#define QTAWS_LISTMFADEVICESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListMFADevicesResponse;

class ListMFADevicesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListMFADevicesResponsePrivate(ListMFADevicesResponse * const q);

    void parseListMFADevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMFADevicesResponse)
    Q_DISABLE_COPY(ListMFADevicesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
