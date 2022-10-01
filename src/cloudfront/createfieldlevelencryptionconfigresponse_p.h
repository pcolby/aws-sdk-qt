// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionConfigResponse;

class CreateFieldLevelEncryptionConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateFieldLevelEncryptionConfigResponsePrivate(CreateFieldLevelEncryptionConfigResponse * const q);

    void parseCreateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(CreateFieldLevelEncryptionConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
