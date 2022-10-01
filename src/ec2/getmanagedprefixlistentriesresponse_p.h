// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTENTRIESRESPONSE_P_H
#define QTAWS_GETMANAGEDPREFIXLISTENTRIESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListEntriesResponse;

class GetManagedPrefixListEntriesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetManagedPrefixListEntriesResponsePrivate(GetManagedPrefixListEntriesResponse * const q);

    void parseGetManagedPrefixListEntriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetManagedPrefixListEntriesResponse)
    Q_DISABLE_COPY(GetManagedPrefixListEntriesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
