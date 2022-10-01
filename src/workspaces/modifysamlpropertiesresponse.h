// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSAMLPROPERTIESRESPONSE_H
#define QTAWS_MODIFYSAMLPROPERTIESRESPONSE_H

#include "workspacesresponse.h"
#include "modifysamlpropertiesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySamlPropertiesResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifySamlPropertiesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifySamlPropertiesResponse(const ModifySamlPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySamlPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySamlPropertiesResponse)
    Q_DISABLE_COPY(ModifySamlPropertiesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
