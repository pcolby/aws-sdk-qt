// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAYERRESPONSE_H
#define QTAWS_UPDATELAYERRESPONSE_H

#include "opsworksresponse.h"
#include "updatelayerrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateLayerResponsePrivate;

class QTAWSOPSWORKS_EXPORT UpdateLayerResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    UpdateLayerResponse(const UpdateLayerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLayerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLayerResponse)
    Q_DISABLE_COPY(UpdateLayerResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
