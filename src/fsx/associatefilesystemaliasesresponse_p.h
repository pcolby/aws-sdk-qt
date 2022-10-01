// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFILESYSTEMALIASESRESPONSE_P_H
#define QTAWS_ASSOCIATEFILESYSTEMALIASESRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class AssociateFileSystemAliasesResponse;

class AssociateFileSystemAliasesResponsePrivate : public FSxResponsePrivate {

public:

    explicit AssociateFileSystemAliasesResponsePrivate(AssociateFileSystemAliasesResponse * const q);

    void parseAssociateFileSystemAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateFileSystemAliasesResponse)
    Q_DISABLE_COPY(AssociateFileSystemAliasesResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
