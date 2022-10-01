// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMETADATARESPONSE_H
#define QTAWS_UPDATECONTACTFLOWMETADATARESPONSE_H

#include "connectresponse.h"
#include "updatecontactflowmetadatarequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowMetadataResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowMetadataResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactFlowMetadataResponse(const UpdateContactFlowMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactFlowMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowMetadataResponse)
    Q_DISABLE_COPY(UpdateContactFlowMetadataResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
