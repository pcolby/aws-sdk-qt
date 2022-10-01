// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKRESOURCESRESPONSE_P_H
#define QTAWS_LISTSTACKRESOURCESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListStackResourcesResponse;

class ListStackResourcesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListStackResourcesResponsePrivate(ListStackResourcesResponse * const q);

    void parseListStackResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStackResourcesResponse)
    Q_DISABLE_COPY(ListStackResourcesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
