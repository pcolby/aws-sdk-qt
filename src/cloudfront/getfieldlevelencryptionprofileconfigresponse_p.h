// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGRESPONSE_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileConfigResponse;

class GetFieldLevelEncryptionProfileConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetFieldLevelEncryptionProfileConfigResponsePrivate(GetFieldLevelEncryptionProfileConfigResponse * const q);

    void parseGetFieldLevelEncryptionProfileConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionProfileConfigResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionProfileConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
