// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCLIENTBRANDINGRESPONSE_H
#define QTAWS_IMPORTCLIENTBRANDINGRESPONSE_H

#include "workspacesresponse.h"
#include "importclientbrandingrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ImportClientBrandingResponsePrivate;

class QTAWSWORKSPACES_EXPORT ImportClientBrandingResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ImportClientBrandingResponse(const ImportClientBrandingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportClientBrandingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportClientBrandingResponse)
    Q_DISABLE_COPY(ImportClientBrandingResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
