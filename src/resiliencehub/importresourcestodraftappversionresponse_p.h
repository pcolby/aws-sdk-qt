// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONRESPONSE_P_H
#define QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ImportResourcesToDraftAppVersionResponse;

class ImportResourcesToDraftAppVersionResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ImportResourcesToDraftAppVersionResponsePrivate(ImportResourcesToDraftAppVersionResponse * const q);

    void parseImportResourcesToDraftAppVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportResourcesToDraftAppVersionResponse)
    Q_DISABLE_COPY(ImportResourcesToDraftAppVersionResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
