// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDRESOURCEPERMISSIONSRESPONSE_H
#define QTAWS_ADDRESOURCEPERMISSIONSRESPONSE_H

#include "workdocsresponse.h"
#include "addresourcepermissionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class AddResourcePermissionsResponsePrivate;

class QTAWSWORKDOCS_EXPORT AddResourcePermissionsResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    AddResourcePermissionsResponse(const AddResourcePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddResourcePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddResourcePermissionsResponse)
    Q_DISABLE_COPY(AddResourcePermissionsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
