// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICIPSRESPONSE_P_H
#define QTAWS_DESCRIBEELASTICIPSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticIpsResponse;

class DescribeElasticIpsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeElasticIpsResponsePrivate(DescribeElasticIpsResponse * const q);

    void parseDescribeElasticIpsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeElasticIpsResponse)
    Q_DISABLE_COPY(DescribeElasticIpsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
