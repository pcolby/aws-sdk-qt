// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYRESPONSE_H
#define QTAWS_GETREGISTRYRESPONSE_H

#include "glueresponse.h"
#include "getregistryrequest.h"

namespace QtAws {
namespace Glue {

class GetRegistryResponsePrivate;

class QTAWSGLUE_EXPORT GetRegistryResponse : public GlueResponse {
    Q_OBJECT

public:
    GetRegistryResponse(const GetRegistryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegistryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryResponse)
    Q_DISABLE_COPY(GetRegistryResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
