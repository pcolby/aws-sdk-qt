// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMARESPONSE_P_H
#define QTAWS_DESCRIBESCHEMARESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeSchemaResponse;

class DescribeSchemaResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeSchemaResponsePrivate(DescribeSchemaResponse * const q);

    void parseDescribeSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSchemaResponse)
    Q_DISABLE_COPY(DescribeSchemaResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
