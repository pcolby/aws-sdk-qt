// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYRESPONSE_H
#define QTAWS_DELETEENTITYRESPONSE_H

#include "iottwinmakerresponse.h"
#include "deleteentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteEntityResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteEntityResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    DeleteEntityResponse(const DeleteEntityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEntityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntityResponse)
    Q_DISABLE_COPY(DeleteEntityResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
