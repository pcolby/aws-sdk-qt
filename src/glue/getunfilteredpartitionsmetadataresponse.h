// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONSMETADATARESPONSE_H
#define QTAWS_GETUNFILTEREDPARTITIONSMETADATARESPONSE_H

#include "glueresponse.h"
#include "getunfilteredpartitionsmetadatarequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionsMetadataResponsePrivate;

class QTAWSGLUE_EXPORT GetUnfilteredPartitionsMetadataResponse : public GlueResponse {
    Q_OBJECT

public:
    GetUnfilteredPartitionsMetadataResponse(const GetUnfilteredPartitionsMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUnfilteredPartitionsMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUnfilteredPartitionsMetadataResponse)
    Q_DISABLE_COPY(GetUnfilteredPartitionsMetadataResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
