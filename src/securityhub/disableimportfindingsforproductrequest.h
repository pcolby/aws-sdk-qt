// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTREQUEST_H
#define QTAWS_DISABLEIMPORTFINDINGSFORPRODUCTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisableImportFindingsForProductRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DisableImportFindingsForProductRequest : public SecurityHubRequest {

public:
    DisableImportFindingsForProductRequest(const DisableImportFindingsForProductRequest &other);
    DisableImportFindingsForProductRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableImportFindingsForProductRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
