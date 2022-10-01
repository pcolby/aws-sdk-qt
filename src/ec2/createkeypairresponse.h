// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYPAIRRESPONSE_H
#define QTAWS_CREATEKEYPAIRRESPONSE_H

#include "ec2response.h"
#include "createkeypairrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateKeyPairResponsePrivate;

class QTAWSEC2_EXPORT CreateKeyPairResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateKeyPairResponse(const CreateKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyPairResponse)
    Q_DISABLE_COPY(CreateKeyPairResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
