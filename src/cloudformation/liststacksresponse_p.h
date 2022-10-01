// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSRESPONSE_P_H
#define QTAWS_LISTSTACKSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListStacksResponse;

class ListStacksResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListStacksResponsePrivate(ListStacksResponse * const q);

    void parseListStacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStacksResponse)
    Q_DISABLE_COPY(ListStacksResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
