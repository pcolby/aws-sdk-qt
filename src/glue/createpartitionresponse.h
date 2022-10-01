// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONRESPONSE_H
#define QTAWS_CREATEPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "createpartitionrequest.h"

namespace QtAws {
namespace Glue {

class CreatePartitionResponsePrivate;

class QTAWSGLUE_EXPORT CreatePartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    CreatePartitionResponse(const CreatePartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartitionResponse)
    Q_DISABLE_COPY(CreatePartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
