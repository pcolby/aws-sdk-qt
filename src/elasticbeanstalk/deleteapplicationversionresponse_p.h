// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONVERSIONRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class DeleteApplicationVersionResponse;

class DeleteApplicationVersionResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit DeleteApplicationVersionResponsePrivate(DeleteApplicationVersionResponse * const q);

    void parseDeleteApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationVersionResponse)
    Q_DISABLE_COPY(DeleteApplicationVersionResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
