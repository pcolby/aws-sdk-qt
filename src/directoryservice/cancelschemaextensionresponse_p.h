// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSCHEMAEXTENSIONRESPONSE_P_H
#define QTAWS_CANCELSCHEMAEXTENSIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CancelSchemaExtensionResponse;

class CancelSchemaExtensionResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CancelSchemaExtensionResponsePrivate(CancelSchemaExtensionResponse * const q);

    void parseCancelSchemaExtensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSchemaExtensionResponse)
    Q_DISABLE_COPY(CancelSchemaExtensionResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
