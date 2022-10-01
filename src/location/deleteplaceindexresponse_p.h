// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEINDEXRESPONSE_P_H
#define QTAWS_DELETEPLACEINDEXRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DeletePlaceIndexResponse;

class DeletePlaceIndexResponsePrivate : public LocationResponsePrivate {

public:

    explicit DeletePlaceIndexResponsePrivate(DeletePlaceIndexResponse * const q);

    void parseDeletePlaceIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlaceIndexResponse)
    Q_DISABLE_COPY(DeletePlaceIndexResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
