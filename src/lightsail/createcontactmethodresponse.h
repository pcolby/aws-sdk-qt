// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTMETHODRESPONSE_H
#define QTAWS_CREATECONTACTMETHODRESPONSE_H

#include "lightsailresponse.h"
#include "createcontactmethodrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContactMethodResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContactMethodResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateContactMethodResponse(const CreateContactMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContactMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContactMethodResponse)
    Q_DISABLE_COPY(CreateContactMethodResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
