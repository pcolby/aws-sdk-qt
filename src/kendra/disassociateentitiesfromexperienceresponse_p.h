// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCERESPONSE_P_H
#define QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DisassociateEntitiesFromExperienceResponse;

class DisassociateEntitiesFromExperienceResponsePrivate : public KendraResponsePrivate {

public:

    explicit DisassociateEntitiesFromExperienceResponsePrivate(DisassociateEntitiesFromExperienceResponse * const q);

    void parseDisassociateEntitiesFromExperienceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateEntitiesFromExperienceResponse)
    Q_DISABLE_COPY(DisassociateEntitiesFromExperienceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
