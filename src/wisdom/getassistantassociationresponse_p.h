// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSISTANTASSOCIATIONRESPONSE_P_H
#define QTAWS_GETASSISTANTASSOCIATIONRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class GetAssistantAssociationResponse;

class GetAssistantAssociationResponsePrivate : public WisdomResponsePrivate {

public:

    explicit GetAssistantAssociationResponsePrivate(GetAssistantAssociationResponse * const q);

    void parseGetAssistantAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssistantAssociationResponse)
    Q_DISABLE_COPY(GetAssistantAssociationResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
