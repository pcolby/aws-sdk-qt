// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTREQUEST_H
#define QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableImportFindingsForProductRequestPrivate;

class QTAWSSECURITYHUB_EXPORT EnableImportFindingsForProductRequest : public SecurityHubRequest {

public:
    EnableImportFindingsForProductRequest(const EnableImportFindingsForProductRequest &other);
    EnableImportFindingsForProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableImportFindingsForProductRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
