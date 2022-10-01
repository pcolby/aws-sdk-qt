// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileResponse;

class GetFieldLevelEncryptionProfileResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetFieldLevelEncryptionProfileResponsePrivate(GetFieldLevelEncryptionProfileResponse * const q);

    void parseGetFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionProfileResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
