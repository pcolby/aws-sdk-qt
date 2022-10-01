// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCRLRESPONSE_H
#define QTAWS_IMPORTCRLRESPONSE_H

#include "rolesanywhereresponse.h"
#include "importcrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ImportCrlResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT ImportCrlResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    ImportCrlResponse(const ImportCrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportCrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportCrlResponse)
    Q_DISABLE_COPY(ImportCrlResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
