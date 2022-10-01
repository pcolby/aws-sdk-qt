// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTRESPONSE_H
#define QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTRESPONSE_H

#include "securityhubresponse.h"
#include "disableimportfindingsforproductrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisableImportFindingsForProductResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DisableImportFindingsForProductResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DisableImportFindingsForProductResponse(const DisableImportFindingsForProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableImportFindingsForProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableImportFindingsForProductResponse)
    Q_DISABLE_COPY(DisableImportFindingsForProductResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
