// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDFACETTOOBJECTRESPONSE_P_H
#define QTAWS_ADDFACETTOOBJECTRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class AddFacetToObjectResponse;

class AddFacetToObjectResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit AddFacetToObjectResponsePrivate(AddFacetToObjectResponse * const q);

    void parseAddFacetToObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddFacetToObjectResponse)
    Q_DISABLE_COPY(AddFacetToObjectResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
