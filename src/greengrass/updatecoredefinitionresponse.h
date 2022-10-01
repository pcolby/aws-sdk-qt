// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOREDEFINITIONRESPONSE_H
#define QTAWS_UPDATECOREDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updatecoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateCoreDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateCoreDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateCoreDefinitionResponse(const UpdateCoreDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCoreDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCoreDefinitionResponse)
    Q_DISABLE_COPY(UpdateCoreDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
