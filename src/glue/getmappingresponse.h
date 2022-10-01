// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPPINGRESPONSE_H
#define QTAWS_GETMAPPINGRESPONSE_H

#include "glueresponse.h"
#include "getmappingrequest.h"

namespace QtAws {
namespace Glue {

class GetMappingResponsePrivate;

class QTAWSGLUE_EXPORT GetMappingResponse : public GlueResponse {
    Q_OBJECT

public:
    GetMappingResponse(const GetMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMappingResponse)
    Q_DISABLE_COPY(GetMappingResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
