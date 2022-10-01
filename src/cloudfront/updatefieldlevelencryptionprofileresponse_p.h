// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionProfileResponse;

class UpdateFieldLevelEncryptionProfileResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateFieldLevelEncryptionProfileResponsePrivate(UpdateFieldLevelEncryptionProfileResponse * const q);

    void parseUpdateFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(UpdateFieldLevelEncryptionProfileResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
