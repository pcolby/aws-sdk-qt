// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPROFILESRESPONSE_P_H
#define QTAWS_MERGEPROFILESRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class MergeProfilesResponse;

class MergeProfilesResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit MergeProfilesResponsePrivate(MergeProfilesResponse * const q);

    void parseMergeProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergeProfilesResponse)
    Q_DISABLE_COPY(MergeProfilesResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
