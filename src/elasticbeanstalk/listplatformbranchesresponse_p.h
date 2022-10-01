// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMBRANCHESRESPONSE_P_H
#define QTAWS_LISTPLATFORMBRANCHESRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListPlatformBranchesResponse;

class ListPlatformBranchesResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit ListPlatformBranchesResponsePrivate(ListPlatformBranchesResponse * const q);

    void parseListPlatformBranchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlatformBranchesResponse)
    Q_DISABLE_COPY(ListPlatformBranchesResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
