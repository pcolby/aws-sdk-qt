// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASRESPONSE_P_H
#define QTAWS_CREATEALIASRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CreateAliasResponse;

class CreateAliasResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CreateAliasResponsePrivate(CreateAliasResponse * const q);

    void parseCreateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAliasResponse)
    Q_DISABLE_COPY(CreateAliasResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
