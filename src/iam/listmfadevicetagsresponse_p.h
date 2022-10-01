// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICETAGSRESPONSE_P_H
#define QTAWS_LISTMFADEVICETAGSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListMFADeviceTagsResponse;

class ListMFADeviceTagsResponsePrivate : public IamResponsePrivate {

public:

    explicit ListMFADeviceTagsResponsePrivate(ListMFADeviceTagsResponse * const q);

    void parseListMFADeviceTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMFADeviceTagsResponse)
    Q_DISABLE_COPY(ListMFADeviceTagsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
