// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTPROPERTIESRESPONSE_H
#define QTAWS_MODIFYCLIENTPROPERTIESRESPONSE_H

#include "workspacesresponse.h"
#include "modifyclientpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyClientPropertiesResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifyClientPropertiesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifyClientPropertiesResponse(const ModifyClientPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyClientPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClientPropertiesResponse)
    Q_DISABLE_COPY(ModifyClientPropertiesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
