// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACETRESPONSE_P_H
#define QTAWS_GETFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetFacetResponse;

class GetFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetFacetResponsePrivate(GetFacetResponse * const q);

    void parseGetFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFacetResponse)
    Q_DISABLE_COPY(GetFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
