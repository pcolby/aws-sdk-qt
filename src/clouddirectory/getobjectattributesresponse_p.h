// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTATTRIBUTESRESPONSE_P_H
#define QTAWS_GETOBJECTATTRIBUTESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectAttributesResponse;

class GetObjectAttributesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetObjectAttributesResponsePrivate(GetObjectAttributesResponse * const q);

    void parseGetObjectAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectAttributesResponse)
    Q_DISABLE_COPY(GetObjectAttributesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
