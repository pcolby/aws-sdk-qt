// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRINCIPALMAPPINGRESPONSE_H
#define QTAWS_DELETEPRINCIPALMAPPINGRESPONSE_H

#include "kendraresponse.h"
#include "deleteprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class DeletePrincipalMappingResponsePrivate;

class QTAWSKENDRA_EXPORT DeletePrincipalMappingResponse : public KendraResponse {
    Q_OBJECT

public:
    DeletePrincipalMappingResponse(const DeletePrincipalMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePrincipalMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePrincipalMappingResponse)
    Q_DISABLE_COPY(DeletePrincipalMappingResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
