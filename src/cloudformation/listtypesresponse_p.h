// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPESRESPONSE_P_H
#define QTAWS_LISTTYPESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListTypesResponse;

class ListTypesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListTypesResponsePrivate(ListTypesResponse * const q);

    void parseListTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTypesResponse)
    Q_DISABLE_COPY(ListTypesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
