// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTRESPONSE_P_H
#define QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DisableImportFindingsForProductResponse;

class DisableImportFindingsForProductResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DisableImportFindingsForProductResponsePrivate(DisableImportFindingsForProductResponse * const q);

    void parseDisableImportFindingsForProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableImportFindingsForProductResponse)
    Q_DISABLE_COPY(DisableImportFindingsForProductResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
