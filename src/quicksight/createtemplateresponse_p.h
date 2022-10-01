// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATERESPONSE_P_H
#define QTAWS_CREATETEMPLATERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateTemplateResponse;

class CreateTemplateResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateTemplateResponsePrivate(CreateTemplateResponse * const q);

    void parseCreateTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTemplateResponse)
    Q_DISABLE_COPY(CreateTemplateResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
