// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTACCESSRESPONSE_H
#define QTAWS_UPDATEENDPOINTACCESSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "updateendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateEndpointAccessResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT UpdateEndpointAccessResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    UpdateEndpointAccessResponse(const UpdateEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointAccessResponse)
    Q_DISABLE_COPY(UpdateEndpointAccessResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
