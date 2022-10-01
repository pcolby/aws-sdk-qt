// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCESTORAGECONFIGRESPONSE_P_H
#define QTAWS_ASSOCIATEINSTANCESTORAGECONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateInstanceStorageConfigResponse;

class AssociateInstanceStorageConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateInstanceStorageConfigResponsePrivate(AssociateInstanceStorageConfigResponse * const q);

    void parseAssociateInstanceStorageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateInstanceStorageConfigResponse)
    Q_DISABLE_COPY(AssociateInstanceStorageConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
