// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPAGERESPONSE_P_H
#define QTAWS_DESCRIBEPAGERESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class DescribePageResponse;

class DescribePageResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit DescribePageResponsePrivate(DescribePageResponse * const q);

    void parseDescribePageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePageResponse)
    Q_DISABLE_COPY(DescribePageResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
