// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBETASKDEFINITIONRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DescribeTaskDefinitionResponse;

class DescribeTaskDefinitionResponsePrivate : public EcsResponsePrivate {

public:

    explicit DescribeTaskDefinitionResponsePrivate(DescribeTaskDefinitionResponse * const q);

    void parseDescribeTaskDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTaskDefinitionResponse)
    Q_DISABLE_COPY(DescribeTaskDefinitionResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
