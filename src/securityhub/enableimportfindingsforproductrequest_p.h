// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTREQUEST_P_H
#define QTAWS_ENABLEIMPORTFINDINGSFORPRODUCTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "enableimportfindingsforproductrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableImportFindingsForProductRequest;

class EnableImportFindingsForProductRequestPrivate : public SecurityHubRequestPrivate {

public:
    EnableImportFindingsForProductRequestPrivate(const SecurityHubRequest::Action action,
                                   EnableImportFindingsForProductRequest * const q);
    EnableImportFindingsForProductRequestPrivate(const EnableImportFindingsForProductRequestPrivate &other,
                                   EnableImportFindingsForProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableImportFindingsForProductRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
