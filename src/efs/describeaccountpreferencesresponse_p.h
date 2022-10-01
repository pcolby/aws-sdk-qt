// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTPREFERENCESRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTPREFERENCESRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeAccountPreferencesResponse;

class DescribeAccountPreferencesResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeAccountPreferencesResponsePrivate(DescribeAccountPreferencesResponse * const q);

    void parseDescribeAccountPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountPreferencesResponse)
    Q_DISABLE_COPY(DescribeAccountPreferencesResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
