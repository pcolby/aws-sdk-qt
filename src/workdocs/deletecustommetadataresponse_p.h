// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETADATARESPONSE_P_H
#define QTAWS_DELETECUSTOMMETADATARESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCustomMetadataResponse;

class DeleteCustomMetadataResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteCustomMetadataResponsePrivate(DeleteCustomMetadataResponse * const q);

    void parseDeleteCustomMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomMetadataResponse)
    Q_DISABLE_COPY(DeleteCustomMetadataResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
