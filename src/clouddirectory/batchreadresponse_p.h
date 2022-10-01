// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREADRESPONSE_P_H
#define QTAWS_BATCHREADRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class BatchReadResponse;

class BatchReadResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit BatchReadResponsePrivate(BatchReadResponse * const q);

    void parseBatchReadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchReadResponse)
    Q_DISABLE_COPY(BatchReadResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
