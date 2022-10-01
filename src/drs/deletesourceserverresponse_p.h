// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCESERVERRESPONSE_P_H
#define QTAWS_DELETESOURCESERVERRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DeleteSourceServerResponse;

class DeleteSourceServerResponsePrivate : public DrsResponsePrivate {

public:

    explicit DeleteSourceServerResponsePrivate(DeleteSourceServerResponse * const q);

    void parseDeleteSourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSourceServerResponse)
    Q_DISABLE_COPY(DeleteSourceServerResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
