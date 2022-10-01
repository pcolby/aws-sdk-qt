// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLASSIFIERRESPONSE_H
#define QTAWS_DELETECLASSIFIERRESPONSE_H

#include "glueresponse.h"
#include "deleteclassifierrequest.h"

namespace QtAws {
namespace Glue {

class DeleteClassifierResponsePrivate;

class QTAWSGLUE_EXPORT DeleteClassifierResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteClassifierResponse(const DeleteClassifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClassifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClassifierResponse)
    Q_DISABLE_COPY(DeleteClassifierResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
