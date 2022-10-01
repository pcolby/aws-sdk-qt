// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONSRESPONSE_P_H
#define QTAWS_LISTSTACKSETOPERATIONSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationsResponse;

class ListStackSetOperationsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListStackSetOperationsResponsePrivate(ListStackSetOperationsResponse * const q);

    void parseListStackSetOperationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStackSetOperationsResponse)
    Q_DISABLE_COPY(ListStackSetOperationsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
