// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMAEXTENSIONRESPONSE_P_H
#define QTAWS_STARTSCHEMAEXTENSIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class StartSchemaExtensionResponse;

class StartSchemaExtensionResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit StartSchemaExtensionResponsePrivate(StartSchemaExtensionResponse * const q);

    void parseStartSchemaExtensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSchemaExtensionResponse)
    Q_DISABLE_COPY(StartSchemaExtensionResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
