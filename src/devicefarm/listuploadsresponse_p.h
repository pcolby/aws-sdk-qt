// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPLOADSRESPONSE_P_H
#define QTAWS_LISTUPLOADSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListUploadsResponse;

class ListUploadsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListUploadsResponsePrivate(ListUploadsResponse * const q);

    void parseListUploadsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUploadsResponse)
    Q_DISABLE_COPY(ListUploadsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
