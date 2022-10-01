// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONRESPONSE_P_H
#define QTAWS_RESTOREMANAGEDPREFIXLISTVERSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RestoreManagedPrefixListVersionResponse;

class RestoreManagedPrefixListVersionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RestoreManagedPrefixListVersionResponsePrivate(RestoreManagedPrefixListVersionResponse * const q);

    void parseRestoreManagedPrefixListVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreManagedPrefixListVersionResponse)
    Q_DISABLE_COPY(RestoreManagedPrefixListVersionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
