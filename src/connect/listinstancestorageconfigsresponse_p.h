// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESTORAGECONFIGSRESPONSE_P_H
#define QTAWS_LISTINSTANCESTORAGECONFIGSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListInstanceStorageConfigsResponse;

class ListInstanceStorageConfigsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListInstanceStorageConfigsResponsePrivate(ListInstanceStorageConfigsResponse * const q);

    void parseListInstanceStorageConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceStorageConfigsResponse)
    Q_DISABLE_COPY(ListInstanceStorageConfigsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
