// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONVERSIONSRESPONSE_H
#define QTAWS_LISTRESOURCEDEFINITIONVERSIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listresourcedefinitionversionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionVersionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListResourceDefinitionVersionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListResourceDefinitionVersionsResponse(const ListResourceDefinitionVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceDefinitionVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListResourceDefinitionVersionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
