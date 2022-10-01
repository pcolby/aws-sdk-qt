// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionConfigResponse;

class DeleteFieldLevelEncryptionConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteFieldLevelEncryptionConfigResponsePrivate(DeleteFieldLevelEncryptionConfigResponse * const q);

    void parseDeleteFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFieldLevelEncryptionConfigResponse)
    Q_DISABLE_COPY(DeleteFieldLevelEncryptionConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
