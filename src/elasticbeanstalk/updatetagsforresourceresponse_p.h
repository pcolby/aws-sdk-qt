// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORRESOURCERESPONSE_P_H
#define QTAWS_UPDATETAGSFORRESOURCERESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class UpdateTagsForResourceResponse;

class UpdateTagsForResourceResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit UpdateTagsForResourceResponsePrivate(UpdateTagsForResourceResponse * const q);

    void parseUpdateTagsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTagsForResourceResponse)
    Q_DISABLE_COPY(UpdateTagsForResourceResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
