// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRIESRESPONSE_P_H
#define QTAWS_DESCRIBEREGISTRIESRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class DescribeRegistriesResponse;

class DescribeRegistriesResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit DescribeRegistriesResponsePrivate(DescribeRegistriesResponse * const q);

    void parseDescribeRegistriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRegistriesResponse)
    Q_DISABLE_COPY(DescribeRegistriesResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
