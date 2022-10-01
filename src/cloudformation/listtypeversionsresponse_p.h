// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEVERSIONSRESPONSE_P_H
#define QTAWS_LISTTYPEVERSIONSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeVersionsResponse;

class ListTypeVersionsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListTypeVersionsResponsePrivate(ListTypeVersionsResponse * const q);

    void parseListTypeVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTypeVersionsResponse)
    Q_DISABLE_COPY(ListTypeVersionsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
