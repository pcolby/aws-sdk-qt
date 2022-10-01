// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYMANAGEDPREFIXLISTRESPONSE_P_H
#define QTAWS_MODIFYMANAGEDPREFIXLISTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyManagedPrefixListResponse;

class ModifyManagedPrefixListResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyManagedPrefixListResponsePrivate(ModifyManagedPrefixListResponse * const q);

    void parseModifyManagedPrefixListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyManagedPrefixListResponse)
    Q_DISABLE_COPY(ModifyManagedPrefixListResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
