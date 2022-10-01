// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKTEMPLATESRESPONSE_P_H
#define QTAWS_LISTTASKTEMPLATESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListTaskTemplatesResponse;

class ListTaskTemplatesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListTaskTemplatesResponsePrivate(ListTaskTemplatesResponse * const q);

    void parseListTaskTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTaskTemplatesResponse)
    Q_DISABLE_COPY(ListTaskTemplatesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
