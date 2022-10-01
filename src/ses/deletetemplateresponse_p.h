// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATERESPONSE_P_H
#define QTAWS_DELETETEMPLATERESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteTemplateResponse;

class DeleteTemplateResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteTemplateResponsePrivate(DeleteTemplateResponse * const q);

    void parseDeleteTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTemplateResponse)
    Q_DISABLE_COPY(DeleteTemplateResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
