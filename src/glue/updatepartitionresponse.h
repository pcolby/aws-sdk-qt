// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTITIONRESPONSE_H
#define QTAWS_UPDATEPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "updatepartitionrequest.h"

namespace QtAws {
namespace Glue {

class UpdatePartitionResponsePrivate;

class QTAWSGLUE_EXPORT UpdatePartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdatePartitionResponse(const UpdatePartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePartitionResponse)
    Q_DISABLE_COPY(UpdatePartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
