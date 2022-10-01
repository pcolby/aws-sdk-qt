// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSISTANTASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEASSISTANTASSOCIATIONRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class CreateAssistantAssociationResponse;

class CreateAssistantAssociationResponsePrivate : public WisdomResponsePrivate {

public:

    explicit CreateAssistantAssociationResponsePrivate(CreateAssistantAssociationResponse * const q);

    void parseCreateAssistantAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAssistantAssociationResponse)
    Q_DISABLE_COPY(CreateAssistantAssociationResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
