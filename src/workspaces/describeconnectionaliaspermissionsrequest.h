// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasPermissionsRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeConnectionAliasPermissionsRequest : public WorkSpacesRequest {

public:
    DescribeConnectionAliasPermissionsRequest(const DescribeConnectionAliasPermissionsRequest &other);
    DescribeConnectionAliasPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionAliasPermissionsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
