// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTALSRESPONSE_H
#define QTAWS_LISTPORTALSRESPONSE_H

#include "workspaceswebresponse.h"
#include "listportalsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListPortalsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListPortalsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListPortalsResponse(const ListPortalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPortalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortalsResponse)
    Q_DISABLE_COPY(ListPortalsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
