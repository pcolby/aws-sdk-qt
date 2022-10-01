// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIENCERESPONSE_P_H
#define QTAWS_DELETEEXPERIENCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteExperienceResponse;

class DeleteExperienceResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteExperienceResponsePrivate(DeleteExperienceResponse * const q);

    void parseDeleteExperienceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExperienceResponse)
    Q_DISABLE_COPY(DeleteExperienceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
