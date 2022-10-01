// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTMANAGERDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEALERTMANAGERDEFINITIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class CreateAlertManagerDefinitionResponse;

class CreateAlertManagerDefinitionResponsePrivate : public AmpResponsePrivate {

public:

    explicit CreateAlertManagerDefinitionResponsePrivate(CreateAlertManagerDefinitionResponse * const q);

    void parseCreateAlertManagerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(CreateAlertManagerDefinitionResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
