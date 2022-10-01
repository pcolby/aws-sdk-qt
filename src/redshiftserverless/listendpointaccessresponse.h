// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTACCESSRESPONSE_H
#define QTAWS_LISTENDPOINTACCESSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "listendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListEndpointAccessResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListEndpointAccessResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ListEndpointAccessResponse(const ListEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointAccessResponse)
    Q_DISABLE_COPY(ListEndpointAccessResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
