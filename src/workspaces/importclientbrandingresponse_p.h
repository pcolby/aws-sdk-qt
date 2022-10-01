// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCLIENTBRANDINGRESPONSE_P_H
#define QTAWS_IMPORTCLIENTBRANDINGRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ImportClientBrandingResponse;

class ImportClientBrandingResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ImportClientBrandingResponsePrivate(ImportClientBrandingResponse * const q);

    void parseImportClientBrandingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportClientBrandingResponse)
    Q_DISABLE_COPY(ImportClientBrandingResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
