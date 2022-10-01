// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionConfigResponse;

class UpdateFieldLevelEncryptionConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateFieldLevelEncryptionConfigResponsePrivate(UpdateFieldLevelEncryptionConfigResponse * const q);

    void parseUpdateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(UpdateFieldLevelEncryptionConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
