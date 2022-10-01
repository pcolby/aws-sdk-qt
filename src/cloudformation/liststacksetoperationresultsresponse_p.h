// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONRESULTSRESPONSE_P_H
#define QTAWS_LISTSTACKSETOPERATIONRESULTSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationResultsResponse;

class ListStackSetOperationResultsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListStackSetOperationResultsResponsePrivate(ListStackSetOperationResultsResponse * const q);

    void parseListStackSetOperationResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStackSetOperationResultsResponse)
    Q_DISABLE_COPY(ListStackSetOperationResultsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
