// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTACCESSRESPONSE_H
#define QTAWS_DELETEENDPOINTACCESSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "deleteendpointaccessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteEndpointAccessResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteEndpointAccessResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    DeleteEndpointAccessResponse(const DeleteEndpointAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEndpointAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointAccessResponse)
    Q_DISABLE_COPY(DeleteEndpointAccessResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
