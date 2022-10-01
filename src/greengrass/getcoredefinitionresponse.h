// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONRESPONSE_H
#define QTAWS_GETCOREDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getcoredefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetCoreDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetCoreDefinitionResponse(const GetCoreDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreDefinitionResponse)
    Q_DISABLE_COPY(GetCoreDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
