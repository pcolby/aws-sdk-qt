// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLRESOURCEPERMISSIONSRESPONSE_H
#define QTAWS_REMOVEALLRESOURCEPERMISSIONSRESPONSE_H

#include "workdocsresponse.h"
#include "removeallresourcepermissionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class RemoveAllResourcePermissionsResponsePrivate;

class QTAWSWORKDOCS_EXPORT RemoveAllResourcePermissionsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    RemoveAllResourcePermissionsResponse(const RemoveAllResourcePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAllResourcePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAllResourcePermissionsResponse)
    Q_DISABLE_COPY(RemoveAllResourcePermissionsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
