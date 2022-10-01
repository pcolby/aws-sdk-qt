// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCESTORAGECONFIGRESPONSE_P_H
#define QTAWS_UPDATEINSTANCESTORAGECONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceStorageConfigResponse;

class UpdateInstanceStorageConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateInstanceStorageConfigResponsePrivate(UpdateInstanceStorageConfigResponse * const q);

    void parseUpdateInstanceStorageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceStorageConfigResponse)
    Q_DISABLE_COPY(UpdateInstanceStorageConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
