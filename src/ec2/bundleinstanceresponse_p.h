// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUNDLEINSTANCERESPONSE_P_H
#define QTAWS_BUNDLEINSTANCERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class BundleInstanceResponse;

class BundleInstanceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit BundleInstanceResponsePrivate(BundleInstanceResponse * const q);

    void parseBundleInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BundleInstanceResponse)
    Q_DISABLE_COPY(BundleInstanceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
