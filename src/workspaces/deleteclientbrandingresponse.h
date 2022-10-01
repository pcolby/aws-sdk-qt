// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTBRANDINGRESPONSE_H
#define QTAWS_DELETECLIENTBRANDINGRESPONSE_H

#include "workspacesresponse.h"
#include "deleteclientbrandingrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteClientBrandingResponsePrivate;

class QTAWSWORKSPACES_EXPORT DeleteClientBrandingResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DeleteClientBrandingResponse(const DeleteClientBrandingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClientBrandingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientBrandingResponse)
    Q_DISABLE_COPY(DeleteClientBrandingResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
