// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIENCERESPONSE_P_H
#define QTAWS_UPDATEEXPERIENCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class UpdateExperienceResponse;

class UpdateExperienceResponsePrivate : public KendraResponsePrivate {

public:

    explicit UpdateExperienceResponsePrivate(UpdateExperienceResponse * const q);

    void parseUpdateExperienceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExperienceResponse)
    Q_DISABLE_COPY(UpdateExperienceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
