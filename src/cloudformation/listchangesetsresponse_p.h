// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSRESPONSE_P_H
#define QTAWS_LISTCHANGESETSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListChangeSetsResponse;

class ListChangeSetsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListChangeSetsResponsePrivate(ListChangeSetsResponse * const q);

    void parseListChangeSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChangeSetsResponse)
    Q_DISABLE_COPY(ListChangeSetsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
