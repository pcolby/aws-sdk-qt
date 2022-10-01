// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMAGERESPONSE_P_H
#define QTAWS_BATCHDELETEIMAGERESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class BatchDeleteImageResponse;

class BatchDeleteImageResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit BatchDeleteImageResponsePrivate(BatchDeleteImageResponse * const q);

    void parseBatchDeleteImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteImageResponse)
    Q_DISABLE_COPY(BatchDeleteImageResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
