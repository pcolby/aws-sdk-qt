// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPRINCIPALMAPPINGRESPONSE_H
#define QTAWS_PUTPRINCIPALMAPPINGRESPONSE_H

#include "kendraresponse.h"
#include "putprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class PutPrincipalMappingResponsePrivate;

class QTAWSKENDRA_EXPORT PutPrincipalMappingResponse : public KendraResponse {
    Q_OBJECT

public:
    PutPrincipalMappingResponse(const PutPrincipalMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPrincipalMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPrincipalMappingResponse)
    Q_DISABLE_COPY(PutPrincipalMappingResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
