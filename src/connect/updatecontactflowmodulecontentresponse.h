// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMODULECONTENTRESPONSE_H
#define QTAWS_UPDATECONTACTFLOWMODULECONTENTRESPONSE_H

#include "connectresponse.h"
#include "updatecontactflowmodulecontentrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowModuleContentResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowModuleContentResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactFlowModuleContentResponse(const UpdateContactFlowModuleContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactFlowModuleContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowModuleContentResponse)
    Q_DISABLE_COPY(UpdateContactFlowModuleContentResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
