// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONALIASESRESPONSE_H
#define QTAWS_DESCRIBECONNECTIONALIASESRESPONSE_H

#include "workspacesresponse.h"
#include "describeconnectionaliasesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectionAliasesResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeConnectionAliasesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeConnectionAliasesResponse(const DescribeConnectionAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectionAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionAliasesResponse)
    Q_DISABLE_COPY(DescribeConnectionAliasesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
