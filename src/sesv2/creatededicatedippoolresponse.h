// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_H
#define QTAWS_CREATEDEDICATEDIPPOOLRESPONSE_H

#include "sesv2response.h"
#include "creatededicatedippoolrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateDedicatedIpPoolResponsePrivate;

class QTAWSSESV2_EXPORT CreateDedicatedIpPoolResponse : public SESv2Response {
    Q_OBJECT

public:
    CreateDedicatedIpPoolResponse(const CreateDedicatedIpPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDedicatedIpPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDedicatedIpPoolResponse)
    Q_DISABLE_COPY(CreateDedicatedIpPoolResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
