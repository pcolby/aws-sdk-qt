// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTACTIONRESPONSE_P_H
#define QTAWS_DELETEEVENTACTIONRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class DeleteEventActionResponse;

class DeleteEventActionResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit DeleteEventActionResponsePrivate(DeleteEventActionResponse * const q);

    void parseDeleteEventActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventActionResponse)
    Q_DISABLE_COPY(DeleteEventActionResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
