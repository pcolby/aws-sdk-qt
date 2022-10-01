// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMALIASESREQUEST_H
#define QTAWS_ASSOCIATEFILESYSTEMALIASESREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class AssociateFileSystemAliasesRequestPrivate;

class QTAWSFSX_EXPORT AssociateFileSystemAliasesRequest : public FSxRequest {

public:
    AssociateFileSystemAliasesRequest(const AssociateFileSystemAliasesRequest &other);
    AssociateFileSystemAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFileSystemAliasesRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
