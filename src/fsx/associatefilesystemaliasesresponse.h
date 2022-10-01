// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMALIASESRESPONSE_H
#define QTAWS_ASSOCIATEFILESYSTEMALIASESRESPONSE_H

#include "fsxresponse.h"
#include "associatefilesystemaliasesrequest.h"

namespace QtAws {
namespace FSx {

class AssociateFileSystemAliasesResponsePrivate;

class QTAWSFSX_EXPORT AssociateFileSystemAliasesResponse : public FSxResponse {
    Q_OBJECT

public:
    AssociateFileSystemAliasesResponse(const AssociateFileSystemAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateFileSystemAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFileSystemAliasesResponse)
    Q_DISABLE_COPY(AssociateFileSystemAliasesResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
