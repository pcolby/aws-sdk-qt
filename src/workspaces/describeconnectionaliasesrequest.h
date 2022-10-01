// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASESREQUEST_H
#define QTAWS_DESCRIBECONNECTIONALIASESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasesRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeConnectionAliasesRequest : public WorkSpacesRequest {

public:
    DescribeConnectionAliasesRequest(const DescribeConnectionAliasesRequest &other);
    DescribeConnectionAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionAliasesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
