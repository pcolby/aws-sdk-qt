// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTMANAGERDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEALERTMANAGERDEFINITIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DeleteAlertManagerDefinitionResponse;

class DeleteAlertManagerDefinitionResponsePrivate : public AmpResponsePrivate {

public:

    explicit DeleteAlertManagerDefinitionResponsePrivate(DeleteAlertManagerDefinitionResponse * const q);

    void parseDeleteAlertManagerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(DeleteAlertManagerDefinitionResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
