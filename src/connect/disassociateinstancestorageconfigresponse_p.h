// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGRESPONSE_P_H
#define QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateInstanceStorageConfigResponse;

class DisassociateInstanceStorageConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateInstanceStorageConfigResponsePrivate(DisassociateInstanceStorageConfigResponse * const q);

    void parseDisassociateInstanceStorageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateInstanceStorageConfigResponse)
    Q_DISABLE_COPY(DisassociateInstanceStorageConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
