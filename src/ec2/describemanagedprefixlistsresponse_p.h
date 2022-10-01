// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDPREFIXLISTSRESPONSE_P_H
#define QTAWS_DESCRIBEMANAGEDPREFIXLISTSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeManagedPrefixListsResponse;

class DescribeManagedPrefixListsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeManagedPrefixListsResponsePrivate(DescribeManagedPrefixListsResponse * const q);

    void parseDescribeManagedPrefixListsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeManagedPrefixListsResponse)
    Q_DISABLE_COPY(DescribeManagedPrefixListsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
