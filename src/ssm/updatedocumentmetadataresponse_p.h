// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTMETADATARESPONSE_P_H
#define QTAWS_UPDATEDOCUMENTMETADATARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentMetadataResponse;

class UpdateDocumentMetadataResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateDocumentMetadataResponsePrivate(UpdateDocumentMetadataResponse * const q);

    void parseUpdateDocumentMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentMetadataResponse)
    Q_DISABLE_COPY(UpdateDocumentMetadataResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
