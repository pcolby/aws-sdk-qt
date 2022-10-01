// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTRESPONSE_P_H
#define QTAWS_CREATEDOCUMENTRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateDocumentResponse;

class CreateDocumentResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateDocumentResponsePrivate(CreateDocumentResponse * const q);

    void parseCreateDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDocumentResponse)
    Q_DISABLE_COPY(CreateDocumentResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
