// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTRESPONSE_H
#define QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTRESPONSE_H

#include "securityhubresponse.h"
#include "enableimportfindingsforproductrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableImportFindingsForProductResponsePrivate;

class QTAWSSECURITYHUB_EXPORT EnableImportFindingsForProductResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    EnableImportFindingsForProductResponse(const EnableImportFindingsForProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableImportFindingsForProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableImportFindingsForProductResponse)
    Q_DISABLE_COPY(EnableImportFindingsForProductResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
