// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSECASERESPONSE_P_H
#define QTAWS_DELETEUSECASERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteUseCaseResponse;

class DeleteUseCaseResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteUseCaseResponsePrivate(DeleteUseCaseResponse * const q);

    void parseDeleteUseCaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUseCaseResponse)
    Q_DISABLE_COPY(DeleteUseCaseResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
