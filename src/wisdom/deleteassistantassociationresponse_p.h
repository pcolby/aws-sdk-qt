// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSISTANTASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEASSISTANTASSOCIATIONRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class DeleteAssistantAssociationResponse;

class DeleteAssistantAssociationResponsePrivate : public WisdomResponsePrivate {

public:

    explicit DeleteAssistantAssociationResponsePrivate(DeleteAssistantAssociationResponse * const q);

    void parseDeleteAssistantAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssistantAssociationResponse)
    Q_DISABLE_COPY(DeleteAssistantAssociationResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
