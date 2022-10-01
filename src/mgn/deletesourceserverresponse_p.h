// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCESERVERRESPONSE_P_H
#define QTAWS_DELETESOURCESERVERRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DeleteSourceServerResponse;

class DeleteSourceServerResponsePrivate : public MgnResponsePrivate {

public:

    explicit DeleteSourceServerResponsePrivate(DeleteSourceServerResponse * const q);

    void parseDeleteSourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSourceServerResponse)
    Q_DISABLE_COPY(DeleteSourceServerResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
