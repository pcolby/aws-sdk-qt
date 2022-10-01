// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDEVICESRESPONSE_P_H
#define QTAWS_SEARCHDEVICESRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class SearchDevicesResponse;

class SearchDevicesResponsePrivate : public BraketResponsePrivate {

public:

    explicit SearchDevicesResponsePrivate(SearchDevicesResponse * const q);

    void parseSearchDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchDevicesResponse)
    Q_DISABLE_COPY(SearchDevicesResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
