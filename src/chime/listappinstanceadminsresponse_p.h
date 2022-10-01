// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSRESPONSE_P_H
#define QTAWS_LISTAPPINSTANCEADMINSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListAppInstanceAdminsResponse;

class ListAppInstanceAdminsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListAppInstanceAdminsResponsePrivate(ListAppInstanceAdminsResponse * const q);

    void parseListAppInstanceAdminsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceAdminsResponse)
    Q_DISABLE_COPY(ListAppInstanceAdminsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
