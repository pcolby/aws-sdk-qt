// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTTYPERESPONSE_H
#define QTAWS_DELETECOMPONENTTYPERESPONSE_H

#include "iottwinmakerresponse.h"
#include "deletecomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteComponentTypeResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT DeleteComponentTypeResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    DeleteComponentTypeResponse(const DeleteComponentTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteComponentTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteComponentTypeResponse)
    Q_DISABLE_COPY(DeleteComponentTypeResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
