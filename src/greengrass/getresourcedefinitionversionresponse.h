// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETRESOURCEDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getresourcedefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionVersionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetResourceDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetResourceDefinitionVersionResponse(const GetResourceDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceDefinitionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceDefinitionVersionResponse)
    Q_DISABLE_COPY(GetResourceDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
