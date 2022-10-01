// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAYERRESPONSE_H
#define QTAWS_CREATELAYERRESPONSE_H

#include "opsworksresponse.h"
#include "createlayerrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateLayerResponsePrivate;

class QTAWSOPSWORKS_EXPORT CreateLayerResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    CreateLayerResponse(const CreateLayerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLayerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLayerResponse)
    Q_DISABLE_COPY(CreateLayerResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
