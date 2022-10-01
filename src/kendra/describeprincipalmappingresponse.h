// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALMAPPINGRESPONSE_H
#define QTAWS_DESCRIBEPRINCIPALMAPPINGRESPONSE_H

#include "kendraresponse.h"
#include "describeprincipalmappingrequest.h"

namespace QtAws {
namespace Kendra {

class DescribePrincipalMappingResponsePrivate;

class QTAWSKENDRA_EXPORT DescribePrincipalMappingResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribePrincipalMappingResponse(const DescribePrincipalMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePrincipalMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrincipalMappingResponse)
    Q_DISABLE_COPY(DescribePrincipalMappingResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
