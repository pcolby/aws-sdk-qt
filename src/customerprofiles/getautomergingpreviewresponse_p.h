// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMERGINGPREVIEWRESPONSE_P_H
#define QTAWS_GETAUTOMERGINGPREVIEWRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class GetAutoMergingPreviewResponse;

class GetAutoMergingPreviewResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit GetAutoMergingPreviewResponsePrivate(GetAutoMergingPreviewResponse * const q);

    void parseGetAutoMergingPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAutoMergingPreviewResponse)
    Q_DISABLE_COPY(GetAutoMergingPreviewResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
