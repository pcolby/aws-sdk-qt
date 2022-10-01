// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENDEDSOURCESERVERRESPONSE_P_H
#define QTAWS_CREATEEXTENDEDSOURCESERVERRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class CreateExtendedSourceServerResponse;

class CreateExtendedSourceServerResponsePrivate : public DrsResponsePrivate {

public:

    explicit CreateExtendedSourceServerResponsePrivate(CreateExtendedSourceServerResponse * const q);

    void parseCreateExtendedSourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExtendedSourceServerResponse)
    Q_DISABLE_COPY(CreateExtendedSourceServerResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
