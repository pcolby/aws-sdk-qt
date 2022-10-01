// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTACCESSRESPONSE_H
#define QTAWS_GETENDPOINTACCESSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetEndpointAccessResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetEndpointAccessResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetEndpointAccessResponse(const GetEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointAccessResponse)
    Q_DISABLE_COPY(GetEndpointAccessResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
