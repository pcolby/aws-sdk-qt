// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADURLRESPONSE_P_H
#define QTAWS_CREATEUPLOADURLRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateUploadUrlResponse;

class CreateUploadUrlResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateUploadUrlResponsePrivate(CreateUploadUrlResponse * const q);

    void parseCreateUploadUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUploadUrlResponse)
    Q_DISABLE_COPY(CreateUploadUrlResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
