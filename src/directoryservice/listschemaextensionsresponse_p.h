// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAEXTENSIONSRESPONSE_P_H
#define QTAWS_LISTSCHEMAEXTENSIONSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class ListSchemaExtensionsResponse;

class ListSchemaExtensionsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit ListSchemaExtensionsResponsePrivate(ListSchemaExtensionsResponse * const q);

    void parseListSchemaExtensionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSchemaExtensionsResponse)
    Q_DISABLE_COPY(ListSchemaExtensionsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
