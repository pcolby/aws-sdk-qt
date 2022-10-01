// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTSUBNETRESPONSE_H
#define QTAWS_CREATEDEFAULTSUBNETRESPONSE_H

#include "ec2response.h"
#include "createdefaultsubnetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultSubnetResponsePrivate;

class QTAWSEC2_EXPORT CreateDefaultSubnetResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateDefaultSubnetResponse(const CreateDefaultSubnetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDefaultSubnetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDefaultSubnetResponse)
    Q_DISABLE_COPY(CreateDefaultSubnetResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
