// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHTYPERESPONSE_P_H
#define QTAWS_PUBLISHTYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class PublishTypeResponse;

class PublishTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit PublishTypeResponsePrivate(PublishTypeResponse * const q);

    void parsePublishTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishTypeResponse)
    Q_DISABLE_COPY(PublishTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
