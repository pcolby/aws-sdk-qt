// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLTRANSFORMRESPONSE_H
#define QTAWS_UPDATEMLTRANSFORMRESPONSE_H

#include "glueresponse.h"
#include "updatemltransformrequest.h"

namespace QtAws {
namespace Glue {

class UpdateMLTransformResponsePrivate;

class QTAWSGLUE_EXPORT UpdateMLTransformResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateMLTransformResponse(const UpdateMLTransformRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMLTransformRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMLTransformResponse)
    Q_DISABLE_COPY(UpdateMLTransformResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
