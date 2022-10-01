// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEREGISTRATIONSRESPONSE_P_H
#define QTAWS_LISTTYPEREGISTRATIONSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeRegistrationsResponse;

class ListTypeRegistrationsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListTypeRegistrationsResponsePrivate(ListTypeRegistrationsResponse * const q);

    void parseListTypeRegistrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTypeRegistrationsResponse)
    Q_DISABLE_COPY(ListTypeRegistrationsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
