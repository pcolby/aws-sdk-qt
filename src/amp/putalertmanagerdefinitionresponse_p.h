// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALERTMANAGERDEFINITIONRESPONSE_P_H
#define QTAWS_PUTALERTMANAGERDEFINITIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class PutAlertManagerDefinitionResponse;

class PutAlertManagerDefinitionResponsePrivate : public AmpResponsePrivate {

public:

    explicit PutAlertManagerDefinitionResponsePrivate(PutAlertManagerDefinitionResponse * const q);

    void parsePutAlertManagerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(PutAlertManagerDefinitionResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
