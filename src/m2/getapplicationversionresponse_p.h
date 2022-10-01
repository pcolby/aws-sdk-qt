// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_GETAPPLICATIONVERSIONRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class GetApplicationVersionResponse;

class GetApplicationVersionResponsePrivate : public M2ResponsePrivate {

public:

    explicit GetApplicationVersionResponsePrivate(GetApplicationVersionResponse * const q);

    void parseGetApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationVersionResponse)
    Q_DISABLE_COPY(GetApplicationVersionResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
