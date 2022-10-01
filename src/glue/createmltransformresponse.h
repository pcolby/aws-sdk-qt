// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLTRANSFORMRESPONSE_H
#define QTAWS_CREATEMLTRANSFORMRESPONSE_H

#include "glueresponse.h"
#include "createmltransformrequest.h"

namespace QtAws {
namespace Glue {

class CreateMLTransformResponsePrivate;

class QTAWSGLUE_EXPORT CreateMLTransformResponse : public GlueResponse {
    Q_OBJECT

public:
    CreateMLTransformResponse(const CreateMLTransformRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMLTransformRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMLTransformResponse)
    Q_DISABLE_COPY(CreateMLTransformResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
