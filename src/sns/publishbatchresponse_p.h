// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHBATCHRESPONSE_P_H
#define QTAWS_PUBLISHBATCHRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class PublishBatchResponse;

class PublishBatchResponsePrivate : public SnsResponsePrivate {

public:

    explicit PublishBatchResponsePrivate(PublishBatchResponse * const q);

    void parsePublishBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishBatchResponse)
    Q_DISABLE_COPY(PublishBatchResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
