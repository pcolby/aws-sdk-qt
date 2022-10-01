// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLTRANSFORMRESPONSE_H
#define QTAWS_DELETEMLTRANSFORMRESPONSE_H

#include "glueresponse.h"
#include "deletemltransformrequest.h"

namespace QtAws {
namespace Glue {

class DeleteMLTransformResponsePrivate;

class QTAWSGLUE_EXPORT DeleteMLTransformResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteMLTransformResponse(const DeleteMLTransformRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMLTransformRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMLTransformResponse)
    Q_DISABLE_COPY(DeleteMLTransformResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
