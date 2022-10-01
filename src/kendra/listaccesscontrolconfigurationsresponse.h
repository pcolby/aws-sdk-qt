// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSCONTROLCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTACCESSCONTROLCONFIGURATIONSRESPONSE_H

#include "kendraresponse.h"
#include "listaccesscontrolconfigurationsrequest.h"

namespace QtAws {
namespace Kendra {

class ListAccessControlConfigurationsResponsePrivate;

class QTAWSKENDRA_EXPORT ListAccessControlConfigurationsResponse : public KendraResponse {
    Q_OBJECT

public:
    ListAccessControlConfigurationsResponse(const ListAccessControlConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccessControlConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccessControlConfigurationsResponse)
    Q_DISABLE_COPY(ListAccessControlConfigurationsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
