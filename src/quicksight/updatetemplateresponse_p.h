// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATERESPONSE_P_H
#define QTAWS_UPDATETEMPLATERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplateResponse;

class UpdateTemplateResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateTemplateResponsePrivate(UpdateTemplateResponse * const q);

    void parseUpdateTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateResponse)
    Q_DISABLE_COPY(UpdateTemplateResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
