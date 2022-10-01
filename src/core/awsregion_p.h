// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSREGION_P_H
#define AWSREGION_P_H

#include "qtawscoreglobal.h"

#include <QtGlobal>

namespace QtAws {
namespace Core {

class AwsRegion;

class AwsRegionPrivate {

public:
    AwsRegionPrivate(const int region, AwsRegion * const q);

protected:
    int region; ///< AwsRegion::Region represented by this object.

private:
    Q_DECLARE_PUBLIC(AwsRegion)
    Q_DISABLE_COPY(AwsRegionPrivate)
    AwsRegion * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsRegionPrivate;
};

} // namespace Core
} // namespace QtAws

#endif
