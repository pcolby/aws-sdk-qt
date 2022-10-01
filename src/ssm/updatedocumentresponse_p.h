// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTRESPONSE_P_H
#define QTAWS_UPDATEDOCUMENTRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentResponse;

class UpdateDocumentResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateDocumentResponsePrivate(UpdateDocumentResponse * const q);

    void parseUpdateDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentResponse)
    Q_DISABLE_COPY(UpdateDocumentResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
