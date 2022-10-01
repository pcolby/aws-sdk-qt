// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTASSOCIATIONSRESPONSE_P_H
#define QTAWS_LISTASSISTANTASSOCIATIONSRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantAssociationsResponse;

class ListAssistantAssociationsResponsePrivate : public WisdomResponsePrivate {

public:

    explicit ListAssistantAssociationsResponsePrivate(ListAssistantAssociationsResponse * const q);

    void parseListAssistantAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssistantAssociationsResponse)
    Q_DISABLE_COPY(ListAssistantAssociationsResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
