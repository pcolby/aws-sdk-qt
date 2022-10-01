// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMANAGEDPREFIXLISTRESPONSE_P_H
#define QTAWS_CREATEMANAGEDPREFIXLISTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateManagedPrefixListResponse;

class CreateManagedPrefixListResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateManagedPrefixListResponsePrivate(CreateManagedPrefixListResponse * const q);

    void parseCreateManagedPrefixListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateManagedPrefixListResponse)
    Q_DISABLE_COPY(CreateManagedPrefixListResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
