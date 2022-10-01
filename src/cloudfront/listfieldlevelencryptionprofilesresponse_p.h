// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESRESPONSE_P_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONPROFILESRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionProfilesResponse;

class ListFieldLevelEncryptionProfilesResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListFieldLevelEncryptionProfilesResponsePrivate(ListFieldLevelEncryptionProfilesResponse * const q);

    void parseListFieldLevelEncryptionProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFieldLevelEncryptionProfilesResponse)
    Q_DISABLE_COPY(ListFieldLevelEncryptionProfilesResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
