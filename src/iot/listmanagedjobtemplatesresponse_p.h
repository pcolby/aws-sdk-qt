// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDJOBTEMPLATESRESPONSE_P_H
#define QTAWS_LISTMANAGEDJOBTEMPLATESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListManagedJobTemplatesResponse;

class ListManagedJobTemplatesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListManagedJobTemplatesResponsePrivate(ListManagedJobTemplatesResponse * const q);

    void parseListManagedJobTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedJobTemplatesResponse)
    Q_DISABLE_COPY(ListManagedJobTemplatesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
