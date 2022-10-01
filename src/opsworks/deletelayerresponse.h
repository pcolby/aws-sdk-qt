// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERRESPONSE_H
#define QTAWS_DELETELAYERRESPONSE_H

#include "opsworksresponse.h"
#include "deletelayerrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeleteLayerResponsePrivate;

class QTAWSOPSWORKS_EXPORT DeleteLayerResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DeleteLayerResponse(const DeleteLayerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLayerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLayerResponse)
    Q_DISABLE_COPY(DeleteLayerResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
