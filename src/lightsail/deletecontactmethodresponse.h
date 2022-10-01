// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTMETHODRESPONSE_H
#define QTAWS_DELETECONTACTMETHODRESPONSE_H

#include "lightsailresponse.h"
#include "deletecontactmethodrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContactMethodResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteContactMethodResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteContactMethodResponse(const DeleteContactMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactMethodResponse)
    Q_DISABLE_COPY(DeleteContactMethodResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
