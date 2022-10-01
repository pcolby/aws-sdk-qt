// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFACETFROMOBJECTRESPONSE_P_H
#define QTAWS_REMOVEFACETFROMOBJECTRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class RemoveFacetFromObjectResponse;

class RemoveFacetFromObjectResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit RemoveFacetFromObjectResponsePrivate(RemoveFacetFromObjectResponse * const q);

    void parseRemoveFacetFromObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveFacetFromObjectResponse)
    Q_DISABLE_COPY(RemoveFacetFromObjectResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
