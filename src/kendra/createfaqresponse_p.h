// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFAQRESPONSE_P_H
#define QTAWS_CREATEFAQRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class CreateFaqResponse;

class CreateFaqResponsePrivate : public KendraResponsePrivate {

public:

    explicit CreateFaqResponsePrivate(CreateFaqResponse * const q);

    void parseCreateFaqResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFaqResponse)
    Q_DISABLE_COPY(CreateFaqResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
