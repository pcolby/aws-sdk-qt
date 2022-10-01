// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEVERSIONRESPONSE_H
#define QTAWS_DELETETABLEVERSIONRESPONSE_H

#include "glueresponse.h"
#include "deletetableversionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteTableVersionResponsePrivate;

class QTAWSGLUE_EXPORT DeleteTableVersionResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteTableVersionResponse(const DeleteTableVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTableVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTableVersionResponse)
    Q_DISABLE_COPY(DeleteTableVersionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
