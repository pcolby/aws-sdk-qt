// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDTABLEMETADATARESPONSE_H
#define QTAWS_GETUNFILTEREDTABLEMETADATARESPONSE_H

#include "glueresponse.h"
#include "getunfilteredtablemetadatarequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredTableMetadataResponsePrivate;

class QTAWSGLUE_EXPORT GetUnfilteredTableMetadataResponse : public GlueResponse {
    Q_OBJECT

public:
    GetUnfilteredTableMetadataResponse(const GetUnfilteredTableMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUnfilteredTableMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUnfilteredTableMetadataResponse)
    Q_DISABLE_COPY(GetUnfilteredTableMetadataResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
