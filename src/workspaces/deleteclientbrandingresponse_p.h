// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTBRANDINGRESPONSE_P_H
#define QTAWS_DELETECLIENTBRANDINGRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteClientBrandingResponse;

class DeleteClientBrandingResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DeleteClientBrandingResponsePrivate(DeleteClientBrandingResponse * const q);

    void parseDeleteClientBrandingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClientBrandingResponse)
    Q_DISABLE_COPY(DeleteClientBrandingResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
