// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSERVERENGINEATTRIBUTERESPONSE_H
#define QTAWS_EXPORTSERVERENGINEATTRIBUTERESPONSE_H

#include "opsworkscmresponse.h"
#include "exportserverengineattributerequest.h"

namespace QtAws {
namespace OpsWorksCm {

class ExportServerEngineAttributeResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT ExportServerEngineAttributeResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    ExportServerEngineAttributeResponse(const ExportServerEngineAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportServerEngineAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportServerEngineAttributeResponse)
    Q_DISABLE_COPY(ExportServerEngineAttributeResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
