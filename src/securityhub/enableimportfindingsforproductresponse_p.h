// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTRESPONSE_P_H
#define QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class EnableImportFindingsForProductResponse;

class EnableImportFindingsForProductResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit EnableImportFindingsForProductResponsePrivate(EnableImportFindingsForProductResponse * const q);

    void parseEnableImportFindingsForProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableImportFindingsForProductResponse)
    Q_DISABLE_COPY(EnableImportFindingsForProductResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
