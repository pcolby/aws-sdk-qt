// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITIESTOEXPERIENCERESPONSE_P_H
#define QTAWS_ASSOCIATEENTITIESTOEXPERIENCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class AssociateEntitiesToExperienceResponse;

class AssociateEntitiesToExperienceResponsePrivate : public KendraResponsePrivate {

public:

    explicit AssociateEntitiesToExperienceResponsePrivate(AssociateEntitiesToExperienceResponse * const q);

    void parseAssociateEntitiesToExperienceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateEntitiesToExperienceResponse)
    Q_DISABLE_COPY(AssociateEntitiesToExperienceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
