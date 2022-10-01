// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONRESPONSE_H
#define QTAWS_DELETEPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "deletepartitionrequest.h"

namespace QtAws {
namespace Glue {

class DeletePartitionResponsePrivate;

class QTAWSGLUE_EXPORT DeletePartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    DeletePartitionResponse(const DeletePartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartitionResponse)
    Q_DISABLE_COPY(DeletePartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
