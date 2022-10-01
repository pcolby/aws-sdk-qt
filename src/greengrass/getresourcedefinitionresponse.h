// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONRESPONSE_H
#define QTAWS_GETRESOURCEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetResourceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetResourceDefinitionResponse(const GetResourceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceDefinitionResponse)
    Q_DISABLE_COPY(GetResourceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
