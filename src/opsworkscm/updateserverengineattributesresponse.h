// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERENGINEATTRIBUTESRESPONSE_H
#define QTAWS_UPDATESERVERENGINEATTRIBUTESRESPONSE_H

#include "opsworkscmresponse.h"
#include "updateserverengineattributesrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class UpdateServerEngineAttributesResponsePrivate;

class QTAWSOPSWORKSCM_EXPORT UpdateServerEngineAttributesResponse : public OpsWorksCmResponse {
    Q_OBJECT

public:
    UpdateServerEngineAttributesResponse(const UpdateServerEngineAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServerEngineAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerEngineAttributesResponse)
    Q_DISABLE_COPY(UpdateServerEngineAttributesResponse)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
