// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETCOREDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getcoredefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetCoreDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetCoreDefinitionVersionResponse(const GetCoreDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCoreDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreDefinitionVersionResponse)
    Q_DISABLE_COPY(GetCoreDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
