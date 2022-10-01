// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTITIONSRESPONSE_H
#define QTAWS_GETPARTITIONSRESPONSE_H

#include "glueresponse.h"
#include "getpartitionsrequest.h"

namespace QtAws {
namespace Glue {

class GetPartitionsResponsePrivate;

class QTAWSGLUE_EXPORT GetPartitionsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetPartitionsResponse(const GetPartitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPartitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPartitionsResponse)
    Q_DISABLE_COPY(GetPartitionsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
