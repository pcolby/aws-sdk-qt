// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTAINSPIIENTITIESRESPONSE_P_H
#define QTAWS_CONTAINSPIIENTITIESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ContainsPiiEntitiesResponse;

class ContainsPiiEntitiesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ContainsPiiEntitiesResponsePrivate(ContainsPiiEntitiesResponse * const q);

    void parseContainsPiiEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ContainsPiiEntitiesResponse)
    Q_DISABLE_COPY(ContainsPiiEntitiesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
