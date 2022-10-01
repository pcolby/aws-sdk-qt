// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTACCESSRESPONSE_H
#define QTAWS_MODIFYENDPOINTACCESSRESPONSE_H

#include "redshiftresponse.h"
#include "modifyendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyEndpointAccessResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyEndpointAccessResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyEndpointAccessResponse(const ModifyEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEndpointAccessResponse)
    Q_DISABLE_COPY(ModifyEndpointAccessResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
