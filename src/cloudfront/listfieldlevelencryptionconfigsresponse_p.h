// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSRESPONSE_P_H
#define QTAWS_LISTFIELDLEVELENCRYPTIONCONFIGSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListFieldLevelEncryptionConfigsResponse;

class ListFieldLevelEncryptionConfigsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListFieldLevelEncryptionConfigsResponsePrivate(ListFieldLevelEncryptionConfigsResponse * const q);

    void parseListFieldLevelEncryptionConfigsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFieldLevelEncryptionConfigsResponse)
    Q_DISABLE_COPY(ListFieldLevelEncryptionConfigsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
