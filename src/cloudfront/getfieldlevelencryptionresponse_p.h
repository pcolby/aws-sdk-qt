// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONRESPONSE_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionResponse;

class GetFieldLevelEncryptionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetFieldLevelEncryptionResponsePrivate(GetFieldLevelEncryptionResponse * const q);

    void parseGetFieldLevelEncryptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionResponse)
    Q_DISABLE_COPY(GetFieldLevelEncryptionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
