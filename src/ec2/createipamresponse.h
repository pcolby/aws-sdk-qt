// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMRESPONSE_H
#define QTAWS_CREATEIPAMRESPONSE_H

#include "ec2response.h"
#include "createipamrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamResponsePrivate;

class QTAWSEC2_EXPORT CreateIpamResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateIpamResponse(const CreateIpamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIpamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpamResponse)
    Q_DISABLE_COPY(CreateIpamResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
