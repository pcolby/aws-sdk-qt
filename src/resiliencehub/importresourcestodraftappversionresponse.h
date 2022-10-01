// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONRESPONSE_H
#define QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONRESPONSE_H

#include "resiliencehubresponse.h"
#include "importresourcestodraftappversionrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ImportResourcesToDraftAppVersionResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ImportResourcesToDraftAppVersionResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ImportResourcesToDraftAppVersionResponse(const ImportResourcesToDraftAppVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportResourcesToDraftAppVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportResourcesToDraftAppVersionResponse)
    Q_DISABLE_COPY(ImportResourcesToDraftAppVersionResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
