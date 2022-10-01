// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCERESPONSE_H
#define QTAWS_DELETEINSTANCERESPONSE_H

#include "lightsailresponse.h"
#include "deleteinstancerequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteInstanceResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteInstanceResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteInstanceResponse(const DeleteInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceResponse)
    Q_DISABLE_COPY(DeleteInstanceResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
