// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIGGERRESPONSE_H
#define QTAWS_DELETETRIGGERRESPONSE_H

#include "glueresponse.h"
#include "deletetriggerrequest.h"

namespace QtAws {
namespace Glue {

class DeleteTriggerResponsePrivate;

class QTAWSGLUE_EXPORT DeleteTriggerResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteTriggerResponse(const DeleteTriggerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTriggerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTriggerResponse)
    Q_DISABLE_COPY(DeleteTriggerResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
