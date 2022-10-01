// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVERESPONSE_P_H
#define QTAWS_DELETEARCHIVERESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class DeleteArchiveResponse;

class DeleteArchiveResponsePrivate : public GlacierResponsePrivate {

public:

    explicit DeleteArchiveResponsePrivate(DeleteArchiveResponse * const q);

    void parseDeleteArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteArchiveResponse)
    Q_DISABLE_COPY(DeleteArchiveResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
