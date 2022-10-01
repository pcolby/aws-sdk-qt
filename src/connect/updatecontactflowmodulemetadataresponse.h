// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULEMETADATARESPONSE_H
#define QTAWS_UPDATECONTACTFLOWMODULEMETADATARESPONSE_H

#include "connectresponse.h"
#include "updatecontactflowmodulemetadatarequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleMetadataResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowModuleMetadataResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactFlowModuleMetadataResponse(const UpdateContactFlowModuleMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactFlowModuleMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowModuleMetadataResponse)
    Q_DISABLE_COPY(UpdateContactFlowModuleMetadataResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
