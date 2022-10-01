// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETMANAGEDPREFIXLISTASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetManagedPrefixListAssociationsResponse;

class GetManagedPrefixListAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetManagedPrefixListAssociationsResponsePrivate(GetManagedPrefixListAssociationsResponse * const q);

    void parseGetManagedPrefixListAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetManagedPrefixListAssociationsResponse)
    Q_DISABLE_COPY(GetManagedPrefixListAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
