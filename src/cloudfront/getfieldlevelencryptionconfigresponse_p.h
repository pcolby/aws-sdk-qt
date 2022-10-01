// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionConfigResponse;

class GetFieldLevelEncryptionConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetFieldLevelEncryptionConfigResponsePrivate(GetFieldLevelEncryptionConfigResponse * const q);

    void parseGetFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
