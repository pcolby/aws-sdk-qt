// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIENCERESPONSE_P_H
#define QTAWS_CREATEEXPERIENCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class CreateExperienceResponse;

class CreateExperienceResponsePrivate : public KendraResponsePrivate {

public:

    explicit CreateExperienceResponsePrivate(CreateExperienceResponse * const q);

    void parseCreateExperienceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExperienceResponse)
    Q_DISABLE_COPY(CreateExperienceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
