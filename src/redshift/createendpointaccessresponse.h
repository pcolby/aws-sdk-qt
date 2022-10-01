// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTACCESSRESPONSE_H
#define QTAWS_CREATEENDPOINTACCESSRESPONSE_H

#include "redshiftresponse.h"
#include "createendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class CreateEndpointAccessResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateEndpointAccessResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateEndpointAccessResponse(const CreateEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointAccessResponse)
    Q_DISABLE_COPY(CreateEndpointAccessResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
