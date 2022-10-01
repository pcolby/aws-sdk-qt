// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMALIASESRESPONSE_H
#define QTAWS_DISASSOCIATEFILESYSTEMALIASESRESPONSE_H

#include "fsxresponse.h"
#include "disassociatefilesystemaliasesrequest.h"

namespace QtAws {
namespace FSx {

class DisassociateFileSystemAliasesResponsePrivate;

class QTAWSFSX_EXPORT DisassociateFileSystemAliasesResponse : public FSxResponse {
    Q_OBJECT

public:
    DisassociateFileSystemAliasesResponse(const DisassociateFileSystemAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateFileSystemAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFileSystemAliasesResponse)
    Q_DISABLE_COPY(DisassociateFileSystemAliasesResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
