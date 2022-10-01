// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLESOLUTIONSTACKSRESPONSE_P_H
#define QTAWS_LISTAVAILABLESOLUTIONSTACKSRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class ListAvailableSolutionStacksResponse;

class ListAvailableSolutionStacksResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit ListAvailableSolutionStacksResponsePrivate(ListAvailableSolutionStacksResponse * const q);

    void parseListAvailableSolutionStacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableSolutionStacksResponse)
    Q_DISABLE_COPY(ListAvailableSolutionStacksResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
