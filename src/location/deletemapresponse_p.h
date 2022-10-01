// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAPRESPONSE_P_H
#define QTAWS_DELETEMAPRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DeleteMapResponse;

class DeleteMapResponsePrivate : public LocationResponsePrivate {

public:

    explicit DeleteMapResponsePrivate(DeleteMapResponse * const q);

    void parseDeleteMapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMapResponse)
    Q_DISABLE_COPY(DeleteMapResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
