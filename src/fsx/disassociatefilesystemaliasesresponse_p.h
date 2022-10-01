// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFILESYSTEMALIASESRESPONSE_P_H
#define QTAWS_DISASSOCIATEFILESYSTEMALIASESRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DisassociateFileSystemAliasesResponse;

class DisassociateFileSystemAliasesResponsePrivate : public FSxResponsePrivate {

public:

    explicit DisassociateFileSystemAliasesResponsePrivate(DisassociateFileSystemAliasesResponse * const q);

    void parseDisassociateFileSystemAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFileSystemAliasesResponse)
    Q_DISABLE_COPY(DisassociateFileSystemAliasesResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
