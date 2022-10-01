// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMEINITIATORSRESPONSE_P_H
#define QTAWS_LISTVOLUMEINITIATORSRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeInitiatorsResponse;

class ListVolumeInitiatorsResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ListVolumeInitiatorsResponsePrivate(ListVolumeInitiatorsResponse * const q);

    void parseListVolumeInitiatorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVolumeInitiatorsResponse)
    Q_DISABLE_COPY(ListVolumeInitiatorsResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
