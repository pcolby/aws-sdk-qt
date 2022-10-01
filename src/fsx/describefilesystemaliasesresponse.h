// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMALIASESRESPONSE_H
#define QTAWS_DESCRIBEFILESYSTEMALIASESRESPONSE_H

#include "fsxresponse.h"
#include "describefilesystemaliasesrequest.h"

namespace QtAws {
namespace FSx {

class DescribeFileSystemAliasesResponsePrivate;

class QTAWSFSX_EXPORT DescribeFileSystemAliasesResponse : public FSxResponse {
    Q_OBJECT

public:
    DescribeFileSystemAliasesResponse(const DescribeFileSystemAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFileSystemAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemAliasesResponse)
    Q_DISABLE_COPY(DescribeFileSystemAliasesResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
