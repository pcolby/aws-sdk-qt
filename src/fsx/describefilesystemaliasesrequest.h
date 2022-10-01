// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMALIASESREQUEST_H
#define QTAWS_DESCRIBEFILESYSTEMALIASESREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeFileSystemAliasesRequestPrivate;

class QTAWSFSX_EXPORT DescribeFileSystemAliasesRequest : public FSxRequest {

public:
    DescribeFileSystemAliasesRequest(const DescribeFileSystemAliasesRequest &other);
    DescribeFileSystemAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemAliasesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
