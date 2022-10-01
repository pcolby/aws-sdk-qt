// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSERVERENGINEATTRIBUTERESPONSE_P_H
#define QTAWS_EXPORTSERVERENGINEATTRIBUTERESPONSE_P_H

#include "opsworkscmresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class ExportServerEngineAttributeResponse;

class ExportServerEngineAttributeResponsePrivate : public OpsWorksCmResponsePrivate {

public:

    explicit ExportServerEngineAttributeResponsePrivate(ExportServerEngineAttributeResponse * const q);

    void parseExportServerEngineAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportServerEngineAttributeResponse)
    Q_DISABLE_COPY(ExportServerEngineAttributeResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
