// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTREQUEST_P_H
#define QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "disableimportfindingsforproductrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisableImportFindingsForProductRequest;

class DisableImportFindingsForProductRequestPrivate : public SecurityHubRequestPrivate {

public:
    DisableImportFindingsForProductRequestPrivate(const SecurityHubRequest::Action action,
                                   DisableImportFindingsForProductRequest * const q);
    DisableImportFindingsForProductRequestPrivate(const DisableImportFindingsForProductRequestPrivate &other,
                                   DisableImportFindingsForProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableImportFindingsForProductRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
