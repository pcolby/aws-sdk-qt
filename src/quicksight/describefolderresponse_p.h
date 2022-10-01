// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERRESPONSE_P_H
#define QTAWS_DESCRIBEFOLDERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderResponse;

class DescribeFolderResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeFolderResponsePrivate(DescribeFolderResponse * const q);

    void parseDescribeFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFolderResponse)
    Q_DISABLE_COPY(DescribeFolderResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
