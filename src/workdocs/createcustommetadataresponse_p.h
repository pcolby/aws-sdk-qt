// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETADATARESPONSE_P_H
#define QTAWS_CREATECUSTOMMETADATARESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class CreateCustomMetadataResponse;

class CreateCustomMetadataResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit CreateCustomMetadataResponsePrivate(CreateCustomMetadataResponse * const q);

    void parseCreateCustomMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomMetadataResponse)
    Q_DISABLE_COPY(CreateCustomMetadataResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
