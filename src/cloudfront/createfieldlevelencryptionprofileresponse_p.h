// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionProfileResponse;

class CreateFieldLevelEncryptionProfileResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateFieldLevelEncryptionProfileResponsePrivate(CreateFieldLevelEncryptionProfileResponse * const q);

    void parseCreateFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(CreateFieldLevelEncryptionProfileResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
