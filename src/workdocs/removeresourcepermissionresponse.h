// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVERESOURCEPERMISSIONRESPONSE_H
#define QTAWS_REMOVERESOURCEPERMISSIONRESPONSE_H

#include "workdocsresponse.h"
#include "removeresourcepermissionrequest.h"

namespace QtAws {
namespace WorkDocs {

class RemoveResourcePermissionResponsePrivate;

class QTAWSWORKDOCS_EXPORT RemoveResourcePermissionResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    RemoveResourcePermissionResponse(const RemoveResourcePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveResourcePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveResourcePermissionResponse)
    Q_DISABLE_COPY(RemoveResourcePermissionResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
