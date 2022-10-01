// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGISTRYRESPONSE_H
#define QTAWS_UPDATEREGISTRYRESPONSE_H

#include "glueresponse.h"
#include "updateregistryrequest.h"

namespace QtAws {
namespace Glue {

class UpdateRegistryResponsePrivate;

class QTAWSGLUE_EXPORT UpdateRegistryResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateRegistryResponse(const UpdateRegistryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRegistryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegistryResponse)
    Q_DISABLE_COPY(UpdateRegistryResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
