// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBECONNECTIONALIASPERMISSIONSRESPONSE_H

#include "workspacesresponse.h"
#include "describeconnectionaliaspermissionsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasPermissionsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeConnectionAliasPermissionsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeConnectionAliasPermissionsResponse(const DescribeConnectionAliasPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectionAliasPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionAliasPermissionsResponse)
    Q_DISABLE_COPY(DescribeConnectionAliasPermissionsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
