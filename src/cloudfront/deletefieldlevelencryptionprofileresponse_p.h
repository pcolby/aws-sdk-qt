// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILERESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionProfileResponse;

class DeleteFieldLevelEncryptionProfileResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteFieldLevelEncryptionProfileResponsePrivate(DeleteFieldLevelEncryptionProfileResponse * const q);

    void parseDeleteFieldLevelEncryptionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFieldLevelEncryptionProfileResponse)
    Q_DISABLE_COPY(DeleteFieldLevelEncryptionProfileResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
