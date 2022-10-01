// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETSRESPONSE_P_H
#define QTAWS_LISTSTACKSETSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetsResponse;

class ListStackSetsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListStackSetsResponsePrivate(ListStackSetsResponse * const q);

    void parseListStackSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStackSetsResponse)
    Q_DISABLE_COPY(ListStackSetsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
